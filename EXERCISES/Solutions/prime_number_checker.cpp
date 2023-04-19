#include <iostream>
#include <iomanip>
#include <cmath>

// 2, 3, 5, 7, 11, 13, ...
// 9 -> 1, 3, 9
// 21 -> 3, 7
// 2 * 4 == 8
// 2 * 3 == 6

// 11 -> 3

bool is_prime(uint64_t number) {
    if (number % 2 == 0) return false;

    for (size_t i{3}; i <= std::sqrt(number); i+=2) {
        if (number % i == 0) return false;
    }

    return true;

}

int main() {
    std::cout << std::boolalpha << is_prime(3436341);




}
