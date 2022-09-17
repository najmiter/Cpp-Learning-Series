#include <iostream>
#include <array>
using namespace std;

int main(){
    // int rent_for_shop[5];
    // cout << sizeof rent_for_shop << '\n';
    // rent_for_shop[1] = 90;

    array <int, 5> rent_for_shop = {1,2,3,4,5534};
    array <int, 5> rent_for_shop2 = {0};

    // rent_for_shop[0] = 32;
    // rent_for_shop.at(0) = 32;
    // rent_for_shop.at(1) = 22;
    // rent_for_shop.at(2) = 29;
    // rent_for_shop.at(3) = 9;
    // rent_for_shop.at(4) = 78;

    // for (auto rent : rent_for_shop)
    //     cout << rent << '\n';

//////////////////////////////////////////////////
// Get the first (front) element and the last (back) element of the array 
//////////////////////////////////////////////////

    // cout << rent_for_shop.back() << '\n';
    // cout << rent_for_shop.front() << '\n';

//////////////////////////////////////////////////
//   Address of the first and the last element  //
//////////////////////////////////////////////////

    // cout << rent_for_shop.begin() << '\n';
    // cout << rent_for_shop.end() << '\n';

//////////////////////////////////////////////////
//              Get the base address            //
//////////////////////////////////////////////////

    // cout << rent_for_shop.data() << '\n';
    // cout << rent_for_shop.data()[1] << '\n';

//////////////////////////////////////////////////
//           Find the size of the array         //
//////////////////////////////////////////////////

    // cout << rent_for_shop.size() << '\n';

//////////////////////////////////////////////////
//        See if the array has size = 0         //
//////////////////////////////////////////////////

    // cout << rent_for_shop.empty() << '\n';

//////////////////////////////////////////////////
//       Fill the array with some value         //
//////////////////////////////////////////////////

    // cout << rent_for_shop[2] << '\n';
    // rent_for_shop.fill(90);
    // cout << rent_for_shop[2] << '\n';

//////////////////////////////////////////////////
//               Swap the values                //
//////////////////////////////////////////////////

    // cout << rent_for_shop2[4] << '\n';
    // rent_for_shop2.swap(rent_for_shop);
    // cout << rent_for_shop2[4] << '\n';


//////////////////////////////////////////////////
//              2D Templated Arrays             //
//////////////////////////////////////////////////

    /* array <array<int, 2>, 5> new_arrays;
    // int new_arrays[5][2]; // Correction

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            new_arrays[i][j] = i + j + 2;
            cout << new_arrays[i][j] << ' ';
        }
        cout<< "\n";
    } */
    


}
