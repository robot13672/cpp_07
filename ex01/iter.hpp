#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void iter(T* array, int length, void (*func)(T&))
{
    for(int i = 0; i < length; i++)
    {
        func(array[i]);
    }
}

void print(int &a)
{
    std::cout << a << " ";
}

void multiplyByTwo(int &a) 
{
    a *= 2;
}

#endif