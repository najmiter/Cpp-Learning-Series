#include <iostream>

int getNumber()
{
    int random = 10;
    return random;
}

float getPercentage()
{
    float math, phy, cs, eng, percentage;
    std::cout << "Enter marks for Maths = ";
    std::cin >> math;
    std::cout << "Enter marks for Physics = ";
    std::cin >> phy;
    std::cout << "Enter marks for CS = ";
    std::cin >> cs;
    std::cout << "Enter marks for English = ";
    std::cin >> eng;

    percentage = (math + phy + cs + eng) / 4;

    return percentage; // 85.25
}

// void number()
// {
//     /* ... */
// }

bool isDoorShut()
{
    return true;
}

int main()
{
    int number = getNumber();

    getNumber(); // 10
    // getPercentage();

    float grades = getPercentage();
    // std::cout << "The percentage = " << getPercentage() << std::endl;
    std::cout << "The percentage = " << grades << std::endl;

    // std::cout << number() << std::endl; // DON"T DO THIS

    if (isDoorShut()) // true
    {
        /* ... */
    }



}