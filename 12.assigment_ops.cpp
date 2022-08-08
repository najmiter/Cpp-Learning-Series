#include <iostream>
using namespace std;

int main(){
    // =
    /* int num = 10;

    int num2, num3, num4;

    // / * % - +

    num2 = 2 * ((num + 2) - 3);

    cout<< num2 << endl; */

    //  += -= *= /= %=
    int x = 10;
    int y = 12;
    int z = 2;

    // z = z + 13;
    // z = z + (x + 13);
    z += x + 13; // 
    // lhs = lhs + rhs
    z *= z + y + 13;
    // z = z * (z + y + 13);



    cout<< "the value of z is " << z << endl;

    return 0;
}