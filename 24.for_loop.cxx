#include <iostream>
using namespace std;

int main(){

    int a, b;
    int MAX;

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
        MAX = a > b ? a : b;
        cout << "The max is " << MAX << '\n';
    }
    

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "Hello World\n";
    // }

    // int count = 0;
    // for (;count < 10; count++){
    //     cout << "Hello World\n";
    //      count++;
    // }

    // int number = 101;
    // for (; number > 100;)
    // {
    //     cout << "Enter a number: ";
    //     cin >> number;
    // }
    // cout << "The number is " << number << '\n';
}