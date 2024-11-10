#include <iostream>

int sumOfInput() {
    int result = 0;

    int input = 0;
    std::cin >> input;

    while (input != -1)
    {
        result += input;
        std::cin >> input;
    }
    return result;
}