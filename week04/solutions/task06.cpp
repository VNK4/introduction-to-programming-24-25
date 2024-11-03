#include <iostream>

int main() {
    unsigned m, n;
    std::cin >> m >> n;

    // Задача 6

    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            std::cout << '#' << ' ';
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    // Задача 6.5

    for (size_t i = 0; i < n; ++i) {
        if (i > 0 && i < n - 1) {
            std::cout << '#' << ' ';
            for (size_t j = 1; j < m - 1; ++j) {
                std::cout << "  ";
            }
            std::cout << '#' << std::endl;
            continue;
        }
        for (size_t j = 0; j < m; ++j) {
            std::cout << '#' << ' ';
        }
        std::cout << std::endl;
    }
}