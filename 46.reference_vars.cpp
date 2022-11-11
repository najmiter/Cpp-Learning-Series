#include <iostream>

int main()
{
    int number = 10;
    int& r_number = number;
    r_number++;

    const int& cr_number = number;
    // cr_number++; Won't work bcz the {cr_number} is const!

    int random = 10;
    int* p_random = &random;
    int*& rp_random = p_random;


}