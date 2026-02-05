// Stainless Memsafe works on real C, C++, and Objective-C code, in addition to Stainless Steel.
// This lets Stainless fully analyze its software supply chain,
// and lets the developers have strong system-wide security guarantees
// without forcing anyone to annotate or rewrite everything.


int& memsafe_check_return_reference()
{
    int* p = new int;
    {
        int i = 123;
        p = &i;
    } // i left scope; (pointer is now invalid)
   
    return *p;
}



int* memsafe_check_return_pointer()
{
    int* p = new int;
    {
        int i = 0;
        p = &i;
    } // i left scope; (pointer is now invalid)
   
    return p;
}
