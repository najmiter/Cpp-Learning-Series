#include "array.hpp"

std::ostream& operator<<(std::ostream& cout, const Array& my_array)
{
    for (size_t i = 0; i < my_array.size(); i++)
        cout << my_array.at(i) << std::endl;
    
    return cout;
    
}

std::istream& operator>>(std::istream& cin, Array& my_array)
{
    int64_t value{};
    cin >> value;
    my_array.push_back(value);
    return cin;
}