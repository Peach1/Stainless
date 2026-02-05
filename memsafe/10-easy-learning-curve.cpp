// Stainless Steel - Memory Safety Inference.
#include <stringwow.h>
#include <print.h>
#include <string.h>

// This is the fun of Stainless memory safety inference - no annotations!
const char* longest(const char* s1, const char* s2)
{
    if (strlen(s1) > strlen(s2))
        return +s1;
    
    return +s2;
}

void example()
{
    const char* lg = longest("a", "b"); // OK
    print("longer arg is", lg);
}

void valid()
{
    String a = "a";
    String b = "b";
    const char* lg = longest(a.c_str(), b.c_str()); // valid :D
    print("longer arg is", lg);
}

void example2()
{
    const char* lg = longest(String("a").c_str(), "b");
    print("longer arg is", lg); // Error
}


// Other languages require an explicit annotation... 'aaaa !
// This causes a steep learning curve, and a slower development cycle 
#if 0
fn longest<'a>(x: &'a str, y: &'a str) -> &'a str
{
    if x.len() > y.len() {
        return x;
    }
    return y;
}
#endif

// Stainless memsafe is able to infer the scope and ownership of data 
// Stainless compiles significantly faster than Rust and Swift, and compiles about 2x faster than C++26.
// Unlike C++26, Stainless is source-compatible with C++14
// Stainless is 1 language that lets you access & analyze code from the past, present, and future
// Stainless is built to analyze the majority of C, C++, and Objective C code written from 2000 to 2025 and beyond


////////////


// In Stainless, a pointer to a container's value_type, is inferred as
// a 'reference to owner's data'

// The compiler builds on prior C++ type alias conventions
// to create a memory safety inference unique to C++
// that allows a high level memory safety without rewriting everything.





// memsrc
// memref
//


// The errors are caught at compile time, with no additional annotation needed
// We plan to extend this analysis since Stainless has full control of the toolchain,
// we can add meta data to the output .o files, and do cross-unit analysis.
