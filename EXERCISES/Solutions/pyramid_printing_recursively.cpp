#include <iostream>

void draw_pyramid(int32_t radius) {
    static int32_t upper_boudary{radius+1};
    static int32_t lower_boudary{radius-1};
    static int32_t that_char{};

    if (that_char <= lower_boudary) {
        std::cout << " ";
        draw_pyramid(++that_char);
    } else if (that_char < upper_boudary) {
        std::cout << "*";
        draw_pyramid(++that_char);
    }

    if (lower_boudary > 0) {
        std::cout << "\n";
        lower_boudary--;
        upper_boudary++;
        that_char = 0;
        draw_pyramid(124123);
    }

}

int main() {
    draw_pyramid(5);


}
