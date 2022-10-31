#include <iostream>

int main()
{
    // new[]
    auto d_array = new int[5] {1,2,3,4,5};
    d_array[0] = 12;
    // std::cout<< d_array[0] << std::endl;

    for (int i = 0; i < 5; i++)
    {
        d_array[i] = i*2+10;
        std::cout<< d_array[i] << std::endl;
    }
    
    // delete[]
    // delete d_array; // DON"T DO THIS!
    delete[] d_array;
    d_array = nullptr;

    // int (*twoD)[5] = new int[2][5];
    auto twoD = new int[2][5];

    // Use the array

    delete[] twoD;
    twoD = nullptr;
    


}