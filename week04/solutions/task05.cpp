#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (size_t i = 1; i <= n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            std::cout << i << ' ';
        }
        std::cout << std::endl;
    }
}