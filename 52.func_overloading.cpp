#include <iostream>
#include <initializer_list>

// int sum(int a, int b)
// {
//     std::cout<< "Function with two args" << std::endl;
//     return a + b;
// }

// float sum(float a, float b)
// {
//     std::cout<< "FLoat function with two args" << std::endl;
//     return a + b;
// }

// float sum(float a, int b)
// {
//     std::cout<< "FLoat and int function with two args" << std::endl;
//     return a + b;
// }

// float sum(int a, float b)
// {
//     std::cout<< "FLoat and int function with two args" << std::endl;
//     return a + b;
// }

// int sum(int a, int b, int c)
// {
//     std::cout<< "Function with three args" << std::endl;
//     return a + b + c;
// }

auto sum(std::initializer_list<int> list)
{
    int result = 0;
    for (auto &&i : list)
    {
        result += i;
    }
    return result;
}

int main()
{
    // float result = sum(3, 5.f);
    int result = sum({1,23,4,4,432,5,457,67,68,4});

    std::cout<< result << std::endl;

}