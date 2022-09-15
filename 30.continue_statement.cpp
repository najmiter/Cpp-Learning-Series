#include <iostream>
using namespace std;

int main(){

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (j % 2 == 1){ // 3 % 2 = 1
                continue;
            }
            cout << j << ' ';
        }
        
        if (i % 2 == 0){ // 8 % 2 = 0
            continue;
        }

        cout << "\n\n"; // 4
    }
    

    

}