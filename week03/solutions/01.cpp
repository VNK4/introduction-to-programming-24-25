#include <iostream>

int main() {
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Начин 1

    if(n % 2 == 0) {
        std::cout << n << " is even" << std::endl;
    } else {
        std::cout << n << " is odd" << std::endl;
    }

    // Начин 2 (не препоръчвам)

    std::cout << n << " ";
    n % 2 == 0 ? std::cout << "is even" :  std::cout << "is odd";
    std::cout << std::endl;
}