#include <iostream>

int* alloc(int size)
{
    int* array = new int[size];
    return array;
}

void free(int* array)
{
    delete[] array;
    return;
}

int main()
{

    int* main_array = alloc(10);

    for (int i = 0; i < 10; i++)
    {
        main_array[i] = i * 2;
        std::cout<< main_array[i] << std::endl;
    }
    
    free(main_array);
}
