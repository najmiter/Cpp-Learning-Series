#include <iostream>

int& number()
{
    static int num; // 0
    return num;
}

int main()
{
    number() = 10;
    int nmbr = number();

    std::cout<< "The value of number is " << nmbr << std::endl;


}