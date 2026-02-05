// -Wmemsafe-strict
// Now here's where things get interesting
// In a lot of expertly-written C++ codebases, 2 mutable references might alias another
// In C++ mode, we allow relaxed memsafety, so more code realistically compiles

// If you want this error, enable the -Wmemsafe-strict compiler flag, or use
// #pragma memsafe strict

#include <vector> // C++  std::vector<T>
#include <ArrayList.h> // Stainless  List<T>

#pragma memsafe strict

void modify(List<int>& vec)
{
    vec.resize(24); // modified here
}

void container()
{
    List<int> vec = {1,2,3};
    
    int* ptr = &vec[0]; // valid here
    
    modify(vec);
    
    *ptr = 3; // ERROR, invalidated by modify(resize)
}



// resize changes the memory address of existing data 
// The Stainless compiler defaults to Standard C++ with GNU extensions.

// GNU C++ - The version we use to compile existing C++ code, -Wmemsafe is on by default 
// Stainless C++ - Baremetal C++, True zero cost abstractions with no hidden runtime, and hard compile-time memory safety guarantees
// Stainless Steel - Based on our own Stainless C++, but with higher level features for 3D graphics and game development

// -std=gnu++14       -Wmemsafe (relaxed memsafe)
// -std=stlc++        Baremetal C++  -Wmemsafe -noguardvar -nostdinc++
// -std=stlsteel      Highlevel Baremetal  -Wmemsafe-strict
