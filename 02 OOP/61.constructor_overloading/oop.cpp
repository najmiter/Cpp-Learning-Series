#include "oop.hpp"

Shirt::Shirt(std::string_view _color, int32_t _buttons)
    : Color(_color), numButtons(_buttons), hasButton(true), isFullSleeves(false) 
    {
        if (not numButtons) hasButton = false;
    }

Shirt::Shirt(std::string_view _color)
    : Color(_color), numButtons(0), hasButton(false), isFullSleeves(false) {}

Shirt::Shirt(int32_t _buttons)
    : numButtons(_buttons), Color("Unknown"), hasButton(true), isFullSleeves(false) {}