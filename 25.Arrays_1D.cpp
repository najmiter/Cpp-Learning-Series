#include <iostream>
using namespace std;
const int SIZE = 10;

int main(){
    unsigned rent_for_shop[SIZE] = {0};

    /* rent_for_shop [0] = 80000;
    rent_for_shop [1] = 85000;
    rent_for_shop [2] = 85000;
    rent_for_shop [3] = 85000;
    rent_for_shop [4] = 85000;
    rent_for_shop [5] = 85000;
    rent_for_shop [6] = 90000; */

    // cout << rent_for_shop [6] << '\n';

    for (int i = 0; i < SIZE; i++)
    {
        rent_for_shop[i] = 80000 + (i*5000);
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        cout << rent_for_shop[i] << '\n';
    }
    



}