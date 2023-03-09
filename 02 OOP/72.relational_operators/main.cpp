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

    Array your_array = my_array;
    your_array++;

    if (my_array >= your_array)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }


    




}