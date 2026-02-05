// Stainless catches double-free at compile time 

int main()
{
    int* p = new int(10);
    delete p;
    delete p; // ❌ compile-time error (double free)
}

#include <stdlib.h>

void cstyle()
{
    int* p = (int*)malloc(sizeof(int));
    free(p);
    free(p); // ❌ compile-time error (double free)
}


// The crazy thing is, expert C and C++ programmers won't notice Stainless memsafe is even turned on
// but for beginners, it's a teaching tool and helps detect beginner to intermediate mistakes
// C++ assumes you're an expert that already read all the manuals.
// Stainless assumes you're an expert who doesn't need to read the manual.


// TODO: for Stainless C, we should allow  int* p = malloc(sizeof(int));
// In Standard C++ it's:
// Cannot initialize a variable of type 'int *' with an rvalue of type 'void *'
// but we should relax the void* conversion so more C code compiles
