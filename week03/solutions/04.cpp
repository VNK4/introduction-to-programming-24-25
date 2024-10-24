#include <iostream>

int main() {
    double x, y, r;
    std::cout << "x: ";
    std::cin >> x;
    
    std::cout << "y: ";
    std::cin >> y;

    std::cout << "r: ";
    std::cin >> r;

    bool isInCircle = r * r >= x * x + y * y;
    if(isInCircle) {
        std::cout << "The point is in the circle" << std::endl;
    } else {
        std::cout << "The point is outside the circle" << std::endl;
    }
}