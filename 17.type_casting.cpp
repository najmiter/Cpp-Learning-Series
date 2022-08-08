// Type casting/conversion in C++
#include <iostream>
using namespace std;

int main(){
    int total = 300;
    int Computer_Science, Physics, Maths;

    float percentage;

    int n1 = 2;
    int n2 = 3;

    float n3;

    n3 = (float) n2 / float (n1);

    n3 = static_cast < float > (n2) / static_cast < float > (n1);


    cout << "The value of n3 is " << n3 << "\n";

    // auto number = n1 + n2 + 1.4f;

    // cout << number << "\n";
    // cout << (n1 + n2 + 1.4f) << "\n";
            




    return 0;
}

/* 

        <***** RANKS OF DATATYPES *****>

        

            1. long double          (😎🔥)
            2. double               (😎)
            3. float                (😉)
            4. unsigned long long   (🫡)
            5. long long            (😌)
            6. unsigned long        (🥸)
            7. long                 (😮‍💨)
            8. unsigned int         (🥹)
            9. int                  (🥲)


            short, char             (👶🍼)
   

*/