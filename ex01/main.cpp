#include "iter.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: " << std::endl;
    iter(arr, length, print);
    iter(arr, length, multiplyByTwo);
    std::cout << "\n";
    std::cout << "Changed array: " << std::endl;
    iter(arr, length, print);
    std::cout << "\n";
}