#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const char* Name = "codeMite";
    // Name[0] = '8'; // won't compile
    // cout << "The name is = " << Name << endl;


    Name = "Subscribe";
    // cout << "The value is = " << Name << endl;

    const char* another = "something";

    Name = another;
    // Name[0] = 'c'; // won't compile

    cout << Name << endl;

}