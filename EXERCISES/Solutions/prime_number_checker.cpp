#include <iostream>
#include <iomanip>
#include <cmath>

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
