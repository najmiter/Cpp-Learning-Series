#include <iostream>
#include <cstring>

struct Bike
{
    std::string color;
    unsigned int model;
};

int main()
{
    int number = 10;
    number = 90;

    // Bike Yamaha = { "Black", 2020U };
    Bike Yamaha = { .color = "Blue", .model = 2023U };

    std::cout << "The color is " << Yamaha.color << std::endl;
    std::cout << "The model is " << Yamaha.model << std::endl;

    Yamaha.color = "Red";
    Yamaha.model = 2022U;

    std::cout << "The color is " << Yamaha.color << std::endl;
    std::cout << "The model is " << Yamaha.model << std::endl;



}