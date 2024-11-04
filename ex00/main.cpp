#include "whatever.hpp"

int main()
{
    int a = 1; 
    int b = 9;
    std::cout << "Before swap: a = " << a << " b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << " b = " << b << std::endl;
    float c = 132.32;
    float d = 42.42;
    std::cout << "Float values: c = " << c << " d = " << d << std::endl;
    swap(c ,d);
    std::cout << "After swap: c = " << c << " d = " << d << std::endl;
    std::cout << "min = " << min(a,b) << std::endl;
    std::cout << "max = " << max(a,b) << std::endl;
}