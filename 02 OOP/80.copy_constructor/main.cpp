#include "array.hpp"

int main()
{
    Array my_array{25UL};
    my_array.push_back(1);
    my_array.push_back(2);
    my_array.push_back(3);
    my_array.push_back(4);

    Array your_array = my_array;

    // my_array.~Array();

    std::cout << your_array << std::endl;

    /* 
        my_array
        your_array
    
    */




}