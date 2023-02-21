#include "array.hpp"

int main()
{
    // int64_t array[10];
    Array my_array; // int64_t m_Array[100];

    my_array.push_back(121LL);
    my_array.push_back(131LL);
    my_array.push_back(141LL);
    my_array.push_back(1321LL);
    my_array.push_back(13901LL);

    for (size_t i = 0; i < my_array.size(); i++)
    {
        std::cout<< my_array[i] << std::endl;
    }
    
    

    // Array::display_array(my_array);

    // array[0] = 12LL;
    // array[1] = 141LL;






}
