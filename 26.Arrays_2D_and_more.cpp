#include <iostream>
using namespace std;

const size_t FLOORS = 10UL;
const size_t SHOPS  = 15UL;

int main(){
    unsigned rent_for_shop [FLOORS][SHOPS] = {0}; // 42

    for (size_t floor_number = 0; floor_number < FLOORS; floor_number++){
        // floor_number == 6
        for (size_t shop_number = 0; shop_number < SHOPS; shop_number++){
            rent_for_shop[floor_number][shop_number] = 80000 + (floor_number*5000);
            // rent_for_shop[1][6] = 85000
        }
    }

    for (size_t floor_number = 0; floor_number < FLOORS; floor_number++){

        cout << "Rents for shops of the floor number ["
                << floor_number << "] are as follows\n";

        for (size_t shop_number = 0; shop_number < SHOPS; shop_number++){
            cout << rent_for_shop[floor_number][shop_number] << ' ';
            // rent_for_shop[1][6] = 85000
        }
        cout << '\n';
    }

/////////////////////////////////
//     PREVIOUS LEC STUFF      //
/////////////////////////////////
    /* unsigned a[10] = {0};

    a[0] += 34;

    a[1] += a[0] * 43;

    for (size_t i = 0; i < 10; i++)
    {
        cout<< "Enter a number:: ";
        cin >> a[i];
        
    } */
    


}