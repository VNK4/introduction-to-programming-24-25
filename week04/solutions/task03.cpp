#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int num1 = 0;
    int num2 = 1;
    int num3;

    if (n != 0) {
        for (size_t i = 2; i <= n; ++i) {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
        }
        std::cout << num2 << std::endl;
    } else {
        std::cout << num1 << std::endl;
    }
}