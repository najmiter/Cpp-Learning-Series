#include "array.hpp"

int main()
{
    Array my_array;

    my_array.push_back(12);
    my_array.push_back(14);
    my_array.push_back(154);
    my_array.push_back(15);
    my_array.push_back(1532);
    my_array.push_back(109);

    Array::display_array(my_array);

    Array array2 = my_array--;

    std::cout << "After decrementing\n";

    Array::display_array(my_array);

    



}