#include <iostream>
#include <vector>

int main()
{
    std::vector<int> list = {1, 2, 3, 4};
    
    int* num = &list[0];
    std::cout << "Before: *num (list[0]) = " << *num << std::endl;
    
    // add some more elements
    list.push_back(1); // Potentially invalidates 'num' if reallocation occurs.
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    
    std::cout << "After:  *num (list[0]) = " << *num << std::endl; // ❌ Compile time error in Stainless
    
    return 0;
}


