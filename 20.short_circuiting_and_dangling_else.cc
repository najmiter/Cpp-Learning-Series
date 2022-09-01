#include <iostream>
using namespace std;

int main(){
    int num = 0;
    bool value = false;

    // Short Circuiting
    if (value and num++) {
        cout << "Hello world!\n";
    }
    cout << "The value of num is = " << num << endl;

    // Dangling else
    if (false){
        if (num) 
            cout << num << endl;
        else 
            cout << "uh oh!\n";
    }

}