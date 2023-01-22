#include "oop.hpp"

void display(const Shirt& shirt)
{
    std::cout << "Color = \t" << shirt.Color
                << "\nButtons = \t" << shirt.numButtons 
                << std::endl;
}

int main()
{
    Shirt koi_b = Shirt(10);
    Shirt Something = Shirt("White", 10);

    if (Something.hasButton)
        std::cout << "This shirt has buttons\n";
    else 
        std::cout << "This shirt DOESN'T have buttons\n";

    display(Something);

    Shirt any = Shirt();

    
}