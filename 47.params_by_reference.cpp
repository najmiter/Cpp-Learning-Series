#include <iostream>

void changeValue(int& number) // &number = number
{
    // int another = number; 
    number = 20; // Won't work if the reference is const
}

// void changeValue(int* number) // int* number = &number;
// {
//     *number = 20;
// }

int main()
{
    // int a = 10;
    // int& b = a;
    // b = 20;

    int number = 10;

    std::cout<< "The value before = " << number << std::endl;

    changeValue(number);
    // changeValue(&number); // for the pointer version

    std::cout<< "The value after = " << number << std::endl;




}