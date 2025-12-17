#include "Array.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    // Test default constructor
    Array<int> emptyArray;
    std::cout << "Size of empty array: " << emptyArray.size() << std::endl;

    // Test constructor with size parameter
    unsigned int size = 5;
    Array<int> intArray(size);
    std::cout << "Size of intArray: " << intArray.size() << std::endl;
    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        intArray[i] = i * 2;
    }

    for (unsigned int i = 0; i < intArray.size(); ++i)
    {
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    // Test copy constructor
    Array<int> copyArray(intArray);
    std::cout << "Size of copyArray: " << copyArray.size() << std::endl;
    for (unsigned int i = 0; i < copyArray.size(); ++i)
    {
        std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
    }

    // Test assignment operator
    Array<int> assignArray;
    assignArray = intArray;
    std::cout << "Size of assignArray: " << assignArray.size() << std::endl;
    for (unsigned int i = 0; i < assignArray.size(); ++i)
    {
        std::cout << "assignArray[" << i << "] = " << assignArray[i] << std::endl;
    }

    // Test out of bounds exception
    try {
        std::cout << intArray[intArray.size()] << std::endl;
    } catch (const std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return (0);
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
