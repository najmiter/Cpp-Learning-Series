#include <iostream>
using namespace std;
const size_t SIZE = 7;

int main(){
    unsigned rent_for_shops[SIZE];

    for (size_t i = 0; i < SIZE; i++)
        rent_for_shops[i] = 80000 + i*5000;
    /* for (size_t i = 0; i < SIZE; i++)
        cout << "The rent for shop number ["
                << i 
                << "] is = "
                << rent_for_shops[i]
                << '\n';
      */           

    /* 
        80000
        85000
        90000
        95000
        100000
        105000
        110000
    */

    size_t i = 0;
    for (/* unsigned */auto rent : rent_for_shops)
    {
        cout << "The rent for the shop number ["
                << i 
                << "] is = " 
                << rent
                << '\n';
        i++;
    }


}