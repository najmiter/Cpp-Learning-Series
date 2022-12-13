#include <iostream>

int sum(int, int);
void printValue(int val, int gender = 10, int specie = 100);

int main()
{
    // std::cout<< sum(2, 3) << std::endl;

    printValue(90);

}

int sum(int a, int b)
{
    return a + b;
}

void printValue(int val, int value, int)
{
    std::cout<< "The value is " << val << std::endl;
}