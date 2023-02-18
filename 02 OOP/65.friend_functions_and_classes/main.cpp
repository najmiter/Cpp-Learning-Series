#include "Shop.h"

int main()
{
    Shop shop;
    shop.set_item("Book");
    shop.set_item("Pages");
    shop.set_item("Pencils");
    shop.set_item("Papers");

    display_items(shop);
}
