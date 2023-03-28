#include "array.hpp"

// void function(size_t number) // number = 
// {
//     std::cout << "size_t" << std::endl;
// }

void function(Array your_array) // your_array = 
{
    std::cout << "Array" << std::endl;
}

int main()
{
    Array my_array;

    Array your_array = Array(2UL);

    // std::cout << "Default constructed object = " << my_array.capacity() << std::endl;
    // std::cout << "Parameterized constructed object = " << your_array.capacity() << std::endl;

    function(Array(12UL));





}