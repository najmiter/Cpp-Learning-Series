#include "array.hpp"

std::ostream& operator<<(std::ostream& cout, const Array& my_array)
{
    for (size_t i = 0; i < my_array.size(); i++)
        cout << my_array.at(i) << std::endl;
    
    return cout;
    
}