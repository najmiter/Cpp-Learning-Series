#include <iostream>

int main()
{
    // int age = 18; // 4
    // {
    //     float Age = 18.f; // 4
    // }

    int plates = 4; 

    int* heapVar = new int;
    // int* heapVar = &var;

    *heapVar = 12;

    plates = *heapVar;

    std::cout<< *heapVar << std::endl;

    delete heapVar;
    heapVar = nullptr;

}