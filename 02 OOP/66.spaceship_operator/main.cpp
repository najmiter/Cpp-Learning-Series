#include <iostream>
#include <compare>
#include <cmath>


int main()
{
    auto result { 3 <=> 2 }; // 

    // "this is a string";
    // "this is a str!ng";

    if (std::is_gteq(result))
    {
        std::cout<< "EQUAL" << std::endl;
    }

    /* if (result == std::strong_ordering::equal)
    {
        std::cout<< 1 << std::endl;
    }
    else if (result == std::strong_ordering::less
            or result == std::strong_ordering::equal)
    {
        std::cout<< 2 << std::endl;
    }
    else if (result == std::strong_ordering::greater
            or result == std::strong_ordering::equal)
    {
        std::cout<< 3 << std::endl;
    }
     */





}