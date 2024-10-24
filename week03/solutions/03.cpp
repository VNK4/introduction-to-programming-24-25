#include <iostream>

int main() {
    unsigned year = 0;
    std::cin >> year;

    // Година е високосна, ако се дели на 4 и ако се дели на 100, то се дели и на 400.
    // Нека p = дели се на 4, q = дели се на 100 и r = дели се на 400
    // Тогава можем да запишем горното изискване като (p ^ (q -> r)),
    // което от свойството на импликацията може да се запише като (p ^ (!q v r))

    bool leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);

    if (leap) {
        std::cout << year << " is a leap year" << std::endl;
    } else {
        std::cout << year << " is not a leap year" << std::endl;
    }
}