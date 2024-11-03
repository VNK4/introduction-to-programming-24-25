#include <iostream>

int main() {
    int n;

    std::cin >> n;

    // Начин 1

    for (size_t i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            std::cout << i << ' ';
        }
    }

    // Начин 2

    int curr = 0;
    while (curr <= n) {
        if (curr % 2 == 0) {
            std::cout << curr << ' ';
        }
        ++curr;
    }

    std::cout << std::endl;
}