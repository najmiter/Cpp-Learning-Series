#include <iostream>
using namespace std;

int main(){
    // + - * / %
    float num1 = 2.5f;
    float num2 = 4.3f;

    float answer = num2 - num1; // 4 / 2 = 2

    // cout<< "Total is " << answer << endl;

    // 10 / 3 = 3.3333334
    // quotient => 10 / 3 = 3 
    // remainder => 9 % 6 = 3

    // 10 / 3 = 3.333334
    // 3 / 2 => 1.5

    long int numerator = 7;
    int denomenator = 6;

    int intAnswer = numerator % denomenator;

    cout<< "The remainder is " << intAnswer << endl; 

    return 0;
}