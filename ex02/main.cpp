
#include <iostream>
#include <string>
#include "Array.hpp"
#include "Array.tpp"

int main()
{
    // test empty array
    Array<int> empty;

    std::cout << "Empty array size: "
              << empty.size() << std::endl;

    // test Array of integers
    Array<int> numbers(5);

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i + 1;

    std::cout << "Original array:" << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << std::endl;

    // test copy constructor
    Array<int> copy(numbers);

    copy[0] = 100;

    std::cout << "Original first element: "
              << numbers[0] << std::endl;

    std::cout << "Copied first element: "
              << copy[0] << std::endl;

    // test assignment operator
    Array<int> assigned;

    assigned = numbers;
    assigned[1] = 200;

    std::cout << "Original second element: "
              << numbers[1] << std::endl;

    std::cout << "Assigned second element: "
              << assigned[1] << std::endl;

    // test different type
    Array<std::string> words(2);

    words[0] = "Hello";
    words[1] = "World";

    std::cout << "String array:" << std::endl;
    std::cout << ">> " << words[0] << " " << words[1] << std::endl;

    // test out-of-bounds exception
    try
    {
        std::cout << numbers[10] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
