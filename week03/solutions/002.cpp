#include <iostream>

int main() {
    char smallChar;
    std::cin >> smallChar;

    int diff = 'a' - 'A';

    char bigChar = smallChar - diff;
    std::cout << bigChar << std::endl;
}