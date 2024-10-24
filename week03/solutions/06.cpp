#include <iostream>

int main() {
    int num;
    std::cin >> num;

    bool isTeen = false;

    switch (num / 10) {
        case 1:
            switch (num % 10) {
                case 0:
                    std::cout << "ten" << std::endl;
                    break;
                case 1:
                    std::cout << "eleven" << std::endl;
                    break;
                case 2:
                    std::cout << "twelve" << std::endl;
                    break;
                case 3:
                    std::cout << "thirteen" << std::endl;
                    break;
                case 4:
                    std::cout << "fourteen" << std::endl;
                    break;
                case 5:
                    std::cout << "fifteen" << std::endl;
                    break;
                case 6:
                    std::cout << "sixteen" << std::endl;
                    break;
                case 7:
                    std::cout << "seventeen" << std::endl;
                    break;
                case 8:
                    std::cout << "eighteen" << std::endl;
                    break;
                case 9:
                    std::cout << "nineteen" << std::endl;
                    break;
            }
            isTeen = true;
            break;
        case 2:
            std::cout << "twenty";
            break;
        case 3:
            std::cout << "thirty";
            break;
        case 4:
            std::cout << "forty";
            break;
        case 5:
            std::cout << "fifty";
            break;
        case 6:
            std::cout << "sixty";
            break;
        case 7:
            std::cout << "seventy";
            break;
        case 8:
            std::cout << "eighty";
            break;
        case 9:
            std::cout << "ninety";
            break;
    }

    if (!isTeen) {
        switch (num % 10) {
            case 1:
                std::cout << " one" << std::endl;
                break;
            case 2:
                std::cout << " two" << std::endl;
                break;
            case 3:
                std::cout << " three" << std::endl;
                break;
            case 4:
                std::cout << " four" << std::endl;
                break;
            case 5:
                std::cout << " five" << std::endl;
                break;
            case 6:
                std::cout << " six" << std::endl;
                break;
            case 7:
                std::cout << " seven" << std::endl;
                break;
            case 8:
                std::cout << " eight" << std::endl;
                break;
            case 9:
                std::cout << " nine" << std::endl;
                break;
        }
    }
}