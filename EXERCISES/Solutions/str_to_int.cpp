#include <iostream>
#include <cstring>
#include <string_view>

int64_t str_to_int64(std::string_view number) {
    int64_t converted_number{};
    bool is_positive{ true };
    size_t valid_pos{};

    // Skipping to the actual number (if found)
    for (auto each : number)
    {
        if (isdigit(each)) break;
        valid_pos++;
    }

    // Checking for negative number
    if (valid_pos > 0 and number[valid_pos-1] == '-') is_positive = false;

    // Actual conversion
    for (size_t i{valid_pos}; i < number.length() and isdigit(number[i]); i++)
    {
        converted_number *= 10;
        converted_number += number[i] - 48;  
    

    return is_positive ? converted_number : -converted_number;
}

int main() {
    std::string str_number{ "      32fw5eoi" };

    auto number {str_to_int64(str_number)};

    std::cout << number << '\n';

}
