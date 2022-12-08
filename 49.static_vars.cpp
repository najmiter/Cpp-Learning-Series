#include <iostream>

void incNumber()
{
    static int number = 0; // 0
    number++;               // 2
    std::cout<< "The value of number is " << number << std::endl;
}

int main()
{
    // incNumber();
    // incNumber();

    for (int i = 0; i < 5; i++)
    {
        static int my_static = 0;
        std::cout<< my_static++ << std::endl;
    }

    return 0;
}