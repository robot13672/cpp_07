#include "whatever.hpp"

int main()
{
    int a = 1; 
    int b = 9;
    swap(a, b);
    std::cout << "a = " << a << "  b = " << b << std::endl;
    std::cout << "min = " << min(a,b) << std::endl;
    std::cout << "max = " << max(a,b) << std::endl;
}