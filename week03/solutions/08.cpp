#include <iostream>

int main() {
    int year, month, days;

    std::cin >> year >> month >> days;

    bool leap = year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
    bool validDays = false;

    switch(month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            validDays = days == 31; 
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            validDays = days == 30;
            break;
        case 2:
            validDays = leap ? days == 29 : days == 28;
    }

    if(validDays) {
        std::cout << "Valid" << std::endl;
    } else {
        std::cout << "Invalid" << std::endl;
    }
}