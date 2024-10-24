#include <iostream>

int main() {
    const double PI = 3.14;

    double r = 0;
    double h = 0;

    std::cout << "Enter radius: ";
    std::cin >> r;

    std::cout << "Enter height: ";
    std::cin >> h;

    double area = PI * r * r * h;
    std::cout << "Area: " << area << std::endl;
}