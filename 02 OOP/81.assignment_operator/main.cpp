#include "array.hpp"

int main()
{
    Array my_array{40UL};

    my_array.push_back(1);
    my_array.push_back(2);
    my_array.push_back(3);
    my_array.push_back(4);

    Array your_array;

    // std::cout << "your_array capacity before = " << your_array.capacity() << std::endl;

    your_array = my_array;

    std::cout << your_array << std::endl;


    




}