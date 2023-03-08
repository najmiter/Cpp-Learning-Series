#pragma once
#include <iostream>
#include <cstring>

class Array
{
public:
    Array() = default;

    void push_back(int64_t _data);
    void pop();
    int64_t& front();
    int64_t& back();
    int64_t& at(const size_t);

    size_t size() const { return this->m_Size; }
    bool empty() const { return not this->m_Size; }

    int64_t& operator[](const size_t);
    Array operator+(const Array&) const;
    Array operator++();
    Array operator++(int32_t);
    Array operator--();
    Array operator--(int32_t);
    bool operator==(const Array&) const;


    static void display_array(Array&);

private:
    int64_t m_Array[100UL]{};
    size_t m_Size{};
};