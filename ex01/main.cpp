
#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(const T &element)
{
    std::cout << element << std::endl;
}

template <typename T>
void increment(T &element)
{
    element++;
}

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    std::cout << "Original array:" << std::endl;
    iter(numbers, 5, printElement<int>);

    std::cout << "\nAfter increment:" << std::endl;
    iter(numbers, 5, increment<int>);

    iter(numbers, 5, printElement<int>);

    const std::string words[] = {"Hello", "World", "42"};

    std::cout << "\nConst array:" << std::endl;
    iter(words, 3, printElement<std::string>);

    return 0;
}
