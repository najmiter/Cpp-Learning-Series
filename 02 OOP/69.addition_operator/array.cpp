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

int64_t& Array::operator[](const size_t _idx)
{
    return this->m_Array[_idx];
}

int64_t& Array::at(const size_t _idx)
{
    if (_idx < this->size())
    {
        return this->m_Array[_idx];
    }
    else exit(1);
}

Array Array::operator+(const Array& other) const
{
    Array new_born;
    for (size_t i = 0; i < this->size(); i++)
        new_born.push_back(this->m_Array[i]);

    for (size_t i = 0; i < other.size(); i++)
        new_born.push_back(other.m_Array[i]);
    
    return new_born;
}

void Array::display_array(Array& my_array)
{
    for (size_t i = 0; i < my_array.size(); i++)
    {
        std::cout<< my_array[i] << std::endl;
    }
    
}