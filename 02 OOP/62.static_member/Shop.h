#pragma once

#include <iostream>
#include <vector>
#include <cstring>
#include <string_view>

class Shop
{
public:
    Shop();

    void set_item(std::string_view _item);
    std::string get_item();

    static uint64_t getCount();

private:
    std::vector<std::string> m_Items;

    static uint64_t m_Count;
};