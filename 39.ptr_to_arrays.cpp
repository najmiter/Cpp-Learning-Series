#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int IDs[6] = {11, 22, 33, 44, 55, 66};

    // cout << IDs[0] << endl;

    int* IDs_ptr = IDs;

    // cout << IDs_ptr[0] << endl;
    // cout << *(IDs_ptr + 0) << endl;

    for (int i = 0; i < 6; i++)
    {
        // cout << IDs_ptr[i] << endl;
        // cout << *(IDs_ptr+i) << endl;
        cout << *IDs_ptr++ << endl;
    }
    IDs_ptr--;
    cout << *IDs_ptr << endl;


}