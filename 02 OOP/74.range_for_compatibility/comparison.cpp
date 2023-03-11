#include "array.hpp"

Array::Comparison::Comparison()
    : is_less(false), is_greater(false), is_equal(false), is_less_equal(false), is_greater_equal(false) {}

Array::Comparison::Comparison(std::strong_ordering _result)
{
    this->is_less = _result == std::strong_ordering::less ? true : false;
    this->is_greater = _result == std::strong_ordering::greater ? true : false;
    this->is_equal = _result == std::strong_ordering::equal ? true : false;

    this->is_less_equal = this->is_less or this->is_equal ? true : false;
    this->is_greater_equal = this->is_greater or this->is_equal ? true : false;
}