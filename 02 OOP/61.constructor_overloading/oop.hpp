#include <iostream>
#include <cstring>
#include <string_view>

struct Shirt
{
    std::string Color;
    bool isFullSleeves;
    bool hasButton;
    int32_t numButtons;

    Shirt(std::string_view _color = "Unknown") {};

    Shirt(std::string_view _color, int32_t _buttons);
    Shirt(std::string_view _color);
    Shirt(int32_t _buttons);

};
