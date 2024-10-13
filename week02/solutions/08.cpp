#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;

    int digit1 = n / 100;
    int digit2 = (n / 10) % 10;
    int digit3 = n % 10;

    int sum = digit1 + digit2 + digit3;
    double avrg = sum / 3.0;

    std::cout << sum << ' ' << avrg;
}