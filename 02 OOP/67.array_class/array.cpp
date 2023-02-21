#include "array.hpp"

void Array::push_back(int64_t _data)
{
    if (this->m_Size < 100UL)
    {
        this->m_Array[this->m_Size] = _data;
        this->m_Size++;
    }
    else
    {
        std::cerr << "The array is full" << std::endl;
    }
}

void Array::pop()
{
    if (this->empty())
    {
        std::cerr << "The array is already empty\n";
    }
    else
    {
        this->m_Array[this->m_Size] = 0LL;
        this->m_Size--;
    }
}

int64_t& Array::front()
{
    return this->m_Array[0];
}

int64_t& Array::back()
{
    return this->m_Array[this->m_Size-1];
}


void Array::display_array(const Array& my_array)
{
    for (size_t i = 0; i < my_array.size(); i++)
    {
        std::cout<< my_array.m_Array[i] << std::endl;
    }
    
}