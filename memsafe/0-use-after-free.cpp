// The Stainless compiler is a useful teaching tool
// to catch intermediate & beginner level memory-safety errors at compile-time
#include <stdio.h>

int main()
{
    int* p = new int(42);
    delete p;          // memory freed
    printf("%i", *p); // Compile-time error
    return 0;
}



