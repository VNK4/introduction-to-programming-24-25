#include <iostream>

int main() {
    int a = 0, b = 0, temp = 0;
    std::cin >> a >> b;

    // С помощна променлива
    temp = a;
    a = b;
    b = temp;

    std::cout << a << ' ' << b << std::endl;

    // С аритметични операции
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout  << a << ' ' << b << std::endl;
}