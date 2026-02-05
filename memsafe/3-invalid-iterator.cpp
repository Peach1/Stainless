#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v = {1, 2, 3};
    auto it = v.begin();
    v.push_back(4); // ❌ may reallocate
    std::cout << *it; // UB: invalid iterator
}

