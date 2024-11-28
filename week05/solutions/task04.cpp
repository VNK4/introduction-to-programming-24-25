#include <iostream>

bool isEven(int n) {
    return n % 2 == 0;
}

int abs(int n) {
    return n > 0 ? n : -n;
}

int pow(int n, int m) {
    int result = 1;
    for (size_t i = 0; i < m; ++i)
    {
        result *= n;
    }
    
    return result;
}

int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int num1 = 0;
    int num2 = 1;
    int num3 = 0;
    for (size_t i = 2; i <= n; ++i) {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return num3;
}

int fact(int n) {
    int result = 1;
    for(int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

bool isPrime(int n) {
    for(int i = 2; i < n / 2; ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int gcd(int a, int b) {
    while(a != b) {
        if(a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}