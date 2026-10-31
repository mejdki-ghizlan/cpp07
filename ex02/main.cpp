
#include <iostream>
#include <string>
#include "Array.hpp"
#include "Array.tpp"

int main()
{
    // Test 1: Empty array
    Array<int> empty;

    std::cout << "Empty array size: "
              << empty.size() << std::endl;

    // Test 2: Array of integers
    Array<int> numbers(5);

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i + 1;

    std::cout << "\nOriginal array:" << std::endl;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << std::endl;

    // Test 3: Copy constructor
    Array<int> copy(numbers);

    copy[0] = 100;

    std::cout << "\nOriginal first element: "
              << numbers[0] << std::endl;

    std::cout << "Copied first element: "
              << copy[0] << std::endl;

    // Test 4: Assignment operator
    Array<int> assigned;

    assigned = numbers;
    assigned[1] = 200;

    std::cout << "\nOriginal second element: "
              << numbers[1] << std::endl;

    std::cout << "Assigned second element: "
              << assigned[1] << std::endl;

    // Test 5: Different type
    Array<std::string> words(2);

    words[0] = "Hello";
    words[1] = "World";

    std::cout << "\nString array:" << std::endl;
    std::cout << words[0] << " " << words[1] << std::endl;

    // Test 6: Out-of-bounds exception
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
