#include <vector> // C++
#include <stl/linkedlist.h> // stlsteel (Stainless Steel)
#include <print.h> // stlsteel (Stainless Steel) 

// This is a common beginner mistake,
// A C++ vector (or List) is not memsafe to modify while looping over it.
// The Stainless language infers memory safety without even needing annotation,
// The error is detected at compile time - For both C++ & Stainless Steel.
void memsafe_check_forloop()
{
    std::vector<int> vec = {1,2,3};
    
    for(auto x : vec)
    {
        print(x);
        
        if (x == 1)
            vec.push_back(2);
    }
}

// With linked lists,
// the memory is kept valid and the container can be modified safely
// Stainless Steel's linkedlist implementation is based on EASTL from Electronic Arts,
// but the validation logic applies to other Standard libraries as well (libc++ etc.)
void memsafe_linkedlist()
{
    linkedlist<int> vec = {1,2,3};
    
    for(auto x : vec)
    {
        print(x);
        
        if (x == 1)
            vec.add(2);
        // with linked lists, it *is* safe to modify the length of the container,
        // linkedlist doesn't invalidate other references
    }
}



