#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    // int position = 127;

    // int* bus = nullptr; // comment/remove the re-declaration on line 21 when using this one. 
    // bus = &position;

    // position = 255;
    // cout << "The position is " << position << endl;

    // *bus = 255;
    // cout << "The position is " << position << endl;
    // cout << "The position is " << *bus << endl;
    // cout << "The address of position is " << bus << endl;
    // cout << "The address of position is " << &position << endl;

    int* bus = nullptr;

    int person1 = 12;
    int person2 = 89;

    bus = &person1;
    *bus = 45;

    // cout << "The person1 is " << person1 << endl;

    bus = &person2;
    *bus = 352;

    cout << "The person2 is " << person2 << endl;


}
