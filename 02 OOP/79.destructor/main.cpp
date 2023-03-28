#include "array.hpp"

void function(Array your_array)
{
    std::cout << "Processing the array..." << std::endl;
}

int main()
{
    // Array my_array{25UL};

    std::cout << "From main()" << std::endl;
    // {
    //     // float number = 0.f;
    //     // Array your_array(32);
    // }

    function(Array(78));

    std::cout << "Back to main()" << std::endl;

    // your_array

    // number = 12;






}