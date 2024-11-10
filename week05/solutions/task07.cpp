#include <iostream>

int fact(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int binomialCoefficient(int n, int m) {
    if (n < m) {
        return 0;
    } else if (n == m || m == 0) {
        return 1;
    }
    return fact(n) / (fact(m) * fact(n - m));
}

void pascalTriangle(int r) {
    for (size_t i = 0; i < r; ++i) {
        for (size_t j = 0; j < r; j++) {
            std::cout << binomialCoefficient(i, j) << ' ';
        }
        std::cout << std::endl;
    }
}