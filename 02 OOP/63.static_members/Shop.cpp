#include "Shop.h"

uint64_t Shop::m_Count{0ULL};

Shop::Shop()
{
    Shop::m_Count++;
}

void Shop::set_item(std::string_view _item)
{
    this->m_Items.push_back(std::string(_item));
}

std::string Shop::get_item()
{
    if (this->m_Items.empty())
    {
        std::cerr << "There's no item in the list\n";
        return "";
    }
    else
    {
        return this->m_Items[0];
    }
}

uint64_t Shop::getCount()
{
    return Shop::m_Count;
}