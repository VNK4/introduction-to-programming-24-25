#include <iostream>

bool isLeapYear(int year) {
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main() {
    int year;
    std::cin >> year;
    if(isLeapYear(year)) {
        std::cout << year << "is a leap year" << std::endl;
    } else {
        std::cout << year << "isn't a leap year" << std::endl;
    }
}