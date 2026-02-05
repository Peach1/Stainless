// It's important to analyze raw pointers, because the majority of systems code uses them,
// Stainless is the only modern language that statically analyzes the control flow scope of C, C++, & Objective C pointers


void memsafe_checker()
{
    int* p;
    {
        int i = 0;
        p = &i;
        *p = 1; // OK
    } // i left scope; (pointer is now invalid)
    *p = 2; // Stainless infers what C++ does not
}
