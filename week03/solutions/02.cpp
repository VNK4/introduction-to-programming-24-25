#include <iostream>

int main() {
    unsigned a, b, c;
    std::cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a) {
        std::cout << "Valid triangle" << std::endl;
    } else {
        std::cout << "Not a valid triangle" << std::endl;
    }
}