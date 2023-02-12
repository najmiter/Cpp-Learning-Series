#pragma once

#include <iostream>
#include <vector>
#include <cstring>
#include <string_view>

struct Person
{
    int age;
    int height;
};

class Shop
{
public:
    Shop() = default;
    // Setter
    void set_item(std::string_view _item);
    // Getter
    std::string get_item();
    
private:
    std::vector<std::string> m_Items;
};