#include "array.hpp"

int main()
{
    Array my_array;
    // pushing to my_array
    {
        my_array.push_back(121LL);
        my_array.push_back(131LL);
        my_array.push_back(141LL);
    }

    Array your_array;
    // pushing to your_array
    {
        your_array.push_back(90LL);
        your_array.push_back(670LL);
        your_array.push_back(67LL);
        your_array.push_back(60LL);
    }

    Array our_array; // my_array + your_array
    our_array = my_array + your_array;
    // our_array = my_array.operator+(your_array);

    Array::display_array(our_array);


}