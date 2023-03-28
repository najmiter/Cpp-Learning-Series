#pragma once
#include <iostream>
#include <cstring>
#include <compare>


class Array
{
public:
    struct Comparison
    {
        bool is_less, is_greater, is_equal, is_less_equal, is_greater_equal;
        Comparison();
        Comparison(std::strong_ordering);
    };

    Array();
    explicit Array(size_t capacity);

    void push_back(int64_t _data);
    void pop();

    int64_t& front();
    int64_t& back();
    int64_t& at(const size_t);
    const int64_t& at(const size_t) const;
    size_t size() const { return this->m_Size; }
    size_t capacity() const { return this->m_Capacity; }
    bool empty() const { return not this->m_Size; }

    int64_t* begin();
    int64_t* end();

    int64_t& operator[](const size_t);
    Array operator+(const Array&) const;
    Array operator++();
    Array operator++(int32_t);
    Array operator--();
    Array operator--(int32_t);
    bool operator==(const Array&) const;
    bool operator<(const Array&) const;
    bool operator<=(const Array&) const;
    bool operator>(const Array&) const;
    bool operator>=(const Array&) const;
    Comparison operator<=>(const Array&) const;


    friend std::ostream& operator<<(std::ostream& cout, const Array& my_array);
    friend std::istream& operator>>(std::istream& cin, Array& my_array);
    static void display_array(Array&);

private:
    size_t m_Size{};
    size_t m_Capacity{};
    int64_t* m_Array{};
};

