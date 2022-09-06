#include <iostream>
using namespace std;

int main(){
    int limit = 10;
    int loop = 1;

    int number;
    

    // TWO THINGS TO ALWAYS KEEP IN MIND
    // 1. Condition
    // 2. Change in condition

    while (loop <= limit) // 10 <= 10
    {
        cout << "5 x " << loop << " = " << 5 * loop << '\n' ;
        // 2 x 1 = 2
        // 2 x 2 = 4
        loop++; // 2
    }

    //////////////////////////////
    //////////////////////////////

    // do {
    //     cout << "Enter a number less than 100: ";
    //     cin >> number;
    // } while (number > 100);

    // do
    // {
    //     cout << "5 x " << loop << " = " << 5 * loop << '\n' ;
    //     loop++;
    // } while (loop <= limit);
    

    // cout << "The number is " << number << '\n';



    //////////////////////////////
    //          EXTRAS          //
    //////////////////////////////

    // int test = 13;

    // if (test == 1)
    // {
    //     test++;
    //     cout << "Hello\n";
    //     cout << "The value of test is " << test << '\n';
    //     // ...
    // }


}