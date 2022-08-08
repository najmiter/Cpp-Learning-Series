#include <iostream>
using namespace std;

int COUNTRY_OFFERS = 10;

int main(){
    int stateOffer = 15;
    {
        int stateOffer = 17;
        int cityOffer = 20;
        cout<< "The value of city offer is " << cityOffer << endl;
        cout<< "The value of country offer is " << COUNTRY_OFFERS << endl;
        cout<< "The value of state offer is " << stateOffer << endl;
    }

    // cout<< "The value of city offer is " << cityOffer << endl;


    /* int number;

    number = 15;
    cout<< number << endl; */


    return 0;
}