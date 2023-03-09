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

int64_t &Array::front()
{
    return this->m_Array[0];
}

int64_t &Array::back()
{
    return this->m_Array[this->m_Size - 1];
}

int64_t &Array::operator[](const size_t _idx)
{
    return this->m_Array[_idx];
}

int64_t &Array::at(const size_t _idx)
{
    if (_idx < this->size())
    {
        return this->m_Array[_idx];
    }
    else
        exit(1);
}

Array Array::operator+(const Array &other) const
{
    Array new_born;
    for (size_t i = 0; i < this->size(); i++)
        new_born.push_back(this->m_Array[i]);

    for (size_t i = 0; i < other.size(); i++)
        new_born.push_back(other.m_Array[i]);

    return new_born;
}

Array Array::operator++()
{
    for (size_t i = 0; i < this->size(); i++)
        this->m_Array[i]++;

    return *this;
}

Array Array::operator++(int32_t)
{
    return this->operator++();
}

Array Array::operator--()
{
    for (size_t i = 0; i < this->size(); i++)
        this->m_Array[i]--;

    return *this;
}

Array Array::operator--(int32_t)
{
    return this->operator--();
}

bool Array::operator==(const Array &other_array) const
{
    if (this->size() == other_array.size())
    {
        for (size_t i = 0; i < this->size(); i++)
            if (this->m_Array[i] != other_array.m_Array[i])
                return false;

        return true;
    }
    else
        return false;
}

bool Array::operator<(const Array &other_array) const
{
    if (this->size() == other_array.size())
    {
        for (size_t i = 0; i < this->size(); i++) // 14 >= 15
            if (this->m_Array[i] >= other_array.m_Array[i])
                return false;

        return true;
    }
    else
        return false;
}

bool Array::operator<=(const Array &other_array) const
{
    return *(this) < other_array or *(this) == other_array;
}

bool Array::operator>(const Array &other_array) const
{
    if (this->size() == other_array.size())
    {
        for (size_t i = 0; i < this->size(); i++)
            if (this->m_Array[i] <= other_array.m_Array[i])
                return false;

        return true;
    }
    else
        return false;
}

bool Array::operator>=(const Array &other_array) const
{
    return *(this) > other_array or *(this) == other_array;
}

Array::Comparison Array::operator<=>(const Array& other_array) const
{
    if (this->size() == other_array.size())
    {
        auto initial_result { this->m_Array[0] <=> other_array.m_Array[0] }; // 12 <=> 13
        auto each_result { initial_result };
        // Comparison final_result { Comparison(initial_result) };

        for (size_t i = 1; i < this->size(); i++)
        {
            each_result = this->m_Array[i] <=> other_array.m_Array[i]; // 154 <=> 45
            if (each_result != initial_result)
            {
                return Comparison();
            }
        }
        return Comparison(initial_result);
    }
    else
    {
        return Comparison();
    }
}

void Array::display_array(Array &my_array)
{
    for (size_t i = 0; i < my_array.size(); i++)
    {
        std::cout << my_array[i] << std::endl;
    }
}