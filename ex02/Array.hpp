#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
    private:
        T *elements;
        int len;

    public:
        Array(const Array<T> &copy)
        {
            len = copy.len;
            elements = new T[len];
            for(int i = 0; i < len; i++)
            {
                this->elements[i] = copy[i];
            }
        }
        Array &operator=(const Array<T> &copy)
        {
            if(this == &copy)
                return *this;
            
            delete[] elements;

            len = copy.len;
            elements = new T[len];
            for(int i = 0; i < len; i++)
            {
                this->elements[i] = copy.elements[i];
            }

            return *this;
        }
    public:
        Array() : elements(nullptr), len(0) {};
        Array(unsigned int size)
        {
            elements = new T[size]();
            this->len = size;
        }
        ~Array()
        {
            delete[] elements;
        }
        int size()
        {
            return this->len;
        }
        T& operator[](const int index)
        {
            if(index >= len || index < 0)
                throw std::out_of_range("Index out of range!");
            return elements[index];
        }
        const T& operator[](const int index) const
        {
            if(index >= len || index < 0)
                throw std::out_of_range("Index out of range!");
            return elements[index];
        }
};

#endif