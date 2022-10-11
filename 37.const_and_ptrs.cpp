#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    /* int personID = 100;
    int* const ID_ptr = &personID;

    cout << "The ID of the person before is = " << *ID_ptr << endl;

    *ID_ptr = 101;
    cout << "The ID of the person after is = " << *ID_ptr << endl; */

    // int secondPersonID = 200;
    // ID_ptr = &secondPersonID; // won't compile

    ///////////////////////////////

   /*  const int myID = 123;
    const int* myID_ptr = &myID;
    cout << "My ID is = " << *myID_ptr << endl; */

    // *myID_ptr = 43; // won't compile
    // myID = 43;

    /* const int yourID = 555;
    myID_ptr = &yourID;
    cout << "My your ID is = " << *myID_ptr << endl; */

    // int randomID = 999;
    // myID_ptr = &randomID;
    // randomID = 48;
    // *myID_ptr = 48; // won't compile


    const int ID = 60;
    const int* const ptr_ID = &ID;

    // ptr_ID = &ID; // won't compile
    // *ptr_ID = 54; // won't compile

    cout << "The value is = " << *ptr_ID << endl;

    

}