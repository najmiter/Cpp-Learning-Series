#include <iostream>
#include <cstring>
#include <string_view>

struct Park
{
    int32_t data;
    std::string something;

    Park() : data(10), something("default")
    {
        std::cout << "Constructed a park" << std::endl;
    }
};

int main()
{
    Park city = Park();

    // std::cout<< city.data << std::endl;
    // std::cout<< city.something << std::endl;



}