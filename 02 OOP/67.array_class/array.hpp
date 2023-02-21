#pragma once
#include <iostream>

class Array
{
public:
    Array() = default;

    void push_back(int64_t _data);
    void pop();
    int64_t& front();
    int64_t& back();

    size_t size() const { return this->m_Size; }
    bool empty() const { return not this->m_Size; }

    static void display_array(const Array&);

private:
    int64_t m_Array[100UL]{};
    size_t m_Size{}; // 0
};