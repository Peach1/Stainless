// Control flow analysis lets Stainless analyze raw pointers in for loops.

void for_statement_scope()
{
    int x = 0;
    int* p = &x;
    for (int i = 0; i < 1024; ++i)
    {
        *p = 123;
        int j;
        p = &j;
    }
}

// Control flow anaylsis lets Stainless have minimal false positives,
// We designed Stainless Memsafe to let developers experiment,
// without paying any costly annotations upfront
int* memsafe_check_return1()
{
    int* p;
    {
        int z;
        p = &z;
    }
    
    return p;
}

// In this case, we know the errorneous branch is never taken, so Stainless accepts this code
int* memsafe_check_return2()
{
    int* p;
    {
        int z;
        if (1)
        {
            p = new int;
        }
        else
            p = &z;
    }
    
    return p;
}

int* memsafe_check_return3()
{
    int* p;
    {
        int z;
        if (0)
        {
            p = new int;
        }
        else
            p = &z;
    }
    
    return p;
}

extern bool maybe();

// In this case, a return pointer might be invalid
// so Stainless will reject this code
int* memsafe_check_return4()
{
    int* p;
    {
        int z;
        if (maybe())
        {
            p = new int;
        }
        else
            p = &z;
    }
    
    return p;
}
