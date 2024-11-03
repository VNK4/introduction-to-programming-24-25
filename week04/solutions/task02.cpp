#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (size_t i = 1; i <= n; ++i) {
        if (i % 15 == 0) {
            std::cout << "FizzBuzz" << ' ';
        } else if (i % 3 == 0) {
            std::cout << "Fizz" << ' ';
        } else if (i % 5 == 0) {
            std::cout << "Buzz" << ' ';
        } else {
            std::cout << i << ' ';
        }
    }

    std::cout << std::endl;
}