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
    std::string get_item() const;
    int32_t get_number_of_customers() const;

    static uint64_t getCount();

private:
    std::vector<std::string> m_Items;

    mutable int32_t m_NumberOfCustomers{};

    static uint64_t m_Count;
};