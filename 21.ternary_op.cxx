#include <iostream>
using namespace std;

int main(){
    int 
        a = 101,
        b = 12122
    ;

    int MAX;

    // if (a > b) 
        // MAX = a;
    // else 
        // MAX = b;

    MAX = (a > b) ? a : b; // 10 > 12

    cout 
        << "The maximum is " 
        << (a > b ? "* a * which is = " : "* b * which is = ")
        << MAX
        // << ((a > b) ? a : b)
        << '\n'
    ;
}