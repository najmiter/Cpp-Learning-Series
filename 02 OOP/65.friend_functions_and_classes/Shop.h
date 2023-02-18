#pragma once

#include <iostream>
#include <vector>
#include <cstring>
#include <string_view>

class Shop;


void display_items(const Shop&);

class Other
{
private:
//    Shop shop;
public:
    void foo(const Shop& _shop);
    void foo2(const Shop& _shop);

};

class Shop
{
public:
    Shop();

    void set_item(const std::string& _item);

    std::string get_item(uint64_t _at) const;
    int32_t get_number_of_customers() const;

    friend void display_items(const Shop&);
    friend void Other::foo2(const Shop &_shop);
    friend class Other;

    static uint64_t getCount();

private:
    std::vector<std::string> m_Items;

    mutable int32_t m_NumberOfCustomers{};

    static uint64_t m_Count;
};