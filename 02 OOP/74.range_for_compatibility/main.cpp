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

    my_array.pop();
    my_array.pop();

    for (auto value : my_array)
    {
        value = 12LL;
        // std::cout << value << std::endl;
    }

    Array::display_array(my_array);





}