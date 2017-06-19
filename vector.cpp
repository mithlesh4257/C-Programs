#include <vector>
#include <iostream>
 
int main()
{
    std::vector<int> array { 0, 1, 2, 3, 4 };
    array.resize(3); // set length to 3
 
    std::cout << "The length is: " << array.size() << '\n';
 
    for (auto const &element: array)
        std::cout << element << ' ';
 
    return 0;
};
