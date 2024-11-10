#include <iostream>

int fact(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int binomialCoefficient(int n, int m) {
    if(n < m) {
        return 0;
    } else if(n == m) {
        return 1;
    }
    return fact(n) / (fact(m) * fact(n - m));
}