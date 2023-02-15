#include "Shop.h"

int main()
{
    Shop shop;

    std::cout << shop.get_number_of_customers() << std::endl;

    shop.set_item("Book");
    shop.get_item();

    std::cout << shop.get_number_of_customers() << std::endl;
}
