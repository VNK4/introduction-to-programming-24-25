#include <iostream>

int main() {
    double r = 0;
    std::cin >> r;

    const double PI = 3.14;

    double length = 2 * PI * r;
    double area = PI * r * r;

    std::cout << length << ' ' << area;
}