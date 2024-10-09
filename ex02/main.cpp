#include "Array.hpp"

int main()
{
    try
    {
        // Проверка конструктора по умолчанию
        Array<int> defaultArray;
        std::cout << "Default array size: " << defaultArray.size() << std::endl;

        // Проверка конструктора с параметром
        unsigned int size = 5;
        Array<int> paramArray(size);
        std::cout << "Param array size: " << paramArray.size() << std::endl;

        // Заполнение массива значениями
        for (unsigned int i = 0; i < size; ++i)
        {
            paramArray[i] = i * 10;
        }

        // Проверка доступа к элементам массива
        std::cout << "Param array elements: ";
        for (unsigned int i = 0; i < size; ++i)
        {
            std::cout << paramArray[i] << " ";
        }
        std::cout << std::endl;

        // Проверка конструктора копирования
        Array<int> copyArray(paramArray);
        std::cout << "Copy array elements: ";
        for (unsigned int i = 0; i < copyArray.size(); ++i)
        {
            std::cout << copyArray[i] << " ";
        }
        std::cout << std::endl;

        // Проверка оператора присваивания
        Array<int> assignArray;
        assignArray = paramArray;
        std::cout << "Assign array elements: ";
        for (unsigned int i = 0; i < assignArray.size(); ++i)
        {
            std::cout << assignArray[i] << " ";
        }
        std::cout << std::endl;

        // Проверка исключения при выходе за границы массива
        try
        {
            std::cout << paramArray[size] << std::endl; // Это должно вызвать исключение
        }
        catch (const std::out_of_range &e)
        {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}