#include <iostream>
using namespace std;

int main(){
    int number = 0;
    float f_number = 2.3f;
    f_number++;
    // cout<< "The value of float is " << f_number << endl;

    number--;
    ++number;
    // number = number + 1;
    // number += 1;

    int number2 = number--;

    cout<< "The value of number2 is " << number2 << endl;
    cout<< "The value of number is " << number << endl;


    return 0;
}