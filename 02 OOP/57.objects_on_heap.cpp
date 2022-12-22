#include <iostream>
#include <cstring>

struct Laptop
{
    std::string name;
    uint16_t RAM;
    uint16_t SSD;
    std::string display;
};

int main()
{
    // int* ptr = new int;
    Laptop* laptop_ptr = new Laptop {
        "DELL XPS",
        8,
        512,
        "UHD"
    };
    
    // laptop_ptr->name = "DELL XPS";
    // laptop_ptr->RAM = 8;
    // laptop_ptr->SSD = 256;
    // laptop_ptr->display = "FHD";

    std::cout << "The name is \t" << laptop_ptr->name << std::endl;
    std::cout << "Total RAM is \t" << laptop_ptr->RAM << std::endl;
    std::cout << "Total SSD is \t" << laptop_ptr->SSD << std::endl;
    std::cout << "The display is \t" << laptop_ptr->display << std::endl;

    delete laptop_ptr;
    laptop_ptr = nullptr;



}