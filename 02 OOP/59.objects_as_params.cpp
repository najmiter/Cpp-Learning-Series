#include <iostream>
#include <cstring>
#include <string_view>

struct Park
{
    int32_t data;           // 4
    std::string something;  // 24
};

void init(Park &_park, int32_t _data, std::string_view _something)
{
    _park.data = _data;
    _park.something = _something;
}

void print_data_of(const Park &_park)
{
    std::cout<< "The data is = " << _park.data << std::endl;
    std::cout<< "The something is = " << _park.something << std::endl;
    return;
}


int main()
{
    Park city;          // 28
    init(city, 12, "something");

    print_data_of(city);


}