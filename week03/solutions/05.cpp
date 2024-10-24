#include <iostream>

int main() {
    unsigned a, b, c, d;

    std::cout << "a, b: ";
    std::cin >> a >> b;

    std::cout << "c, d: ";
    std::cin >> c >> d;

    if(b < a || d < c) {
        std::cout << "Invalid sets" << std::endl;
    } else if (c <= b && a <= d) {
        unsigned start = a > c ? a : c;
        unsigned end = b < d ? b : d;
        
        std::cout << "[" << start << ", " << end << "]" << std::endl;
    } else {
        std::cout << "Empty set" << std::endl;
    }
}