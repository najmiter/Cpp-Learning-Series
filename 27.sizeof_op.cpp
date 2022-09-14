#include <iostream>
using namespace std;

int main(){
    char chaar;
    short shawt;
    int inut;
    long linut;
    long long llinut;

    float falot;
    double dubal;
    long double ldubal;


    // cout << "The size of char is "           << sizeof chaar    << " bytes\n";
    // cout << "The size of char is "           << sizeof (char)    << " bytes\n";
    cout << "The size of char is "           << sizeof (chaar)    << " bytes\n";

    cout << "The size of short is "          << sizeof (shawt)    << " bytes\n";

    cout << "The size of int is "            << sizeof (inut)     << " bytes\n";

    cout << "The size of long is "           << sizeof (linut)    << " bytes\n";

    cout << "The size of long long is "      << sizeof (llinut)   << " bytes\n";

    cout << "The size of float is "          << sizeof (falot)    << " bytes\n";

    cout << "The size of double is "         << sizeof (dubal)    << " bytes\n";

    cout << "The size of long double is "    << sizeof (dubal)    << " bytes\n";



    double rent_for_shop [10];

    const size_t SIZE = sizeof (rent_for_shop) / sizeof (double);

    for (size_t i = 0; i < SIZE; i++)
    {
        /* code */
    }
    


}