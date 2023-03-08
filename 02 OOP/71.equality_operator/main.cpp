#include "array.hpp"

int main()
{
    Array my_array;

    // Filling {my_array}
    {
        my_array.push_back(12LL);
        my_array.push_back(14LL);
        my_array.push_back(154LL);
        my_array.push_back(15LL);
        my_array.push_back(1532LL);
        my_array.push_back(109LL);
    }

    Array your_array;
    // Array your_array = my_array;
    // your_array[1] = 110;

    // // Filling {your_array}
    {
        your_array.push_back(12LL);
        your_array.push_back(14LL);
        your_array.push_back(154LL);
        your_array.push_back(15LL);
        your_array.push_back(1532LL);
        your_array.push_back(109LL);
    }

    your_array[1] = 89;

    if (my_array != your_array)
    {
        std::cout << "NOT EQUAL" << std::endl;
    }
    else
    {
        std::cout << "EQUAL" << std::endl;
    }

    




}