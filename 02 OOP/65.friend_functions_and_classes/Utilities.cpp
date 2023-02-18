#include "Shop.h"


void display_items(const Shop& _shop)
{
    for (uint64_t i = 0; i < _shop.m_Items.size(); ++i)
    {
        std::cout << i+1 << ". " << _shop.get_item(i)  << '\n';
    }
}
