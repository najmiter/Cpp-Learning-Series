#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
using std::array;

int main(){
    array<int, 5> test = {1,2,3,4,5};

    // cout << test[5] << endl;     // OUT OF BOUNDS BUT DOESN'T GIVE ANY ERROR WHEN COMPILED AND RUN (🚫 COULD BE DANGEROUS!)

    // cout << test.at(5) << endl;  // THIS ON THE OTHER HAND, WILL CHECK BEFORE ACCESSING. THROWS AN EXCEPTION (error) AND WON'T COMPILE IF IT'S ILLEGAL INDEX (OUT OF BOUNDS!) --> 😘 SAFE TO USE


}