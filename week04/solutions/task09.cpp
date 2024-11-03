#include <iostream>

int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // 0 -> num1
    // 1 -> num2
    // 2 -> num3
    int currNum = 0;

    char command;
    int arg;

    do {
        std::cin >> command;
        switch (command) {
            case '+':
                std::cin >> arg;
                if (currNum == 0) {
                    num1 += arg;
                } else if (currNum == 1) {
                    num2 += arg;
                } else {
                    num3 += arg;
                }
                break;
            case '-':
                std::cin >> arg;
                if (currNum == 0) {
                    num1 -= arg;
                } else if (currNum == 1) {
                    num2 -= arg;
                } else {
                    num3 -= arg;
                }
                break;
            case '*':
                std::cin >> arg;
                if (currNum == 0) {
                    num1 *= arg;
                } else if (currNum == 1) {
                    num2 *= arg;
                } else {
                    num3 *= arg;
                }
                break;
            case '/':
                std::cin >> arg;
                if (currNum == 0) {
                    num1 /= arg;
                } else if (currNum == 1) {
                    num2 /= arg;
                } else {
                    num3 /= arg;
                }
                break;
            case 'c':
                std::cin >> arg;
                if (currNum == 0) {
                    num1 = arg;
                } else if (currNum == 1) {
                    num2 = arg;
                } else {
                    num3 = arg;
                }
                break;
            case 'n':
                if (currNum == 0) {
                    num1 = 0;
                } else if (currNum == 1) {
                    num2 = 0;
                } else {
                    num3 = 0;
                }
                break;
            case 'o':
                if (currNum == 0) {
                    std::cout << num1 << ' ';
                } else if (currNum == 1) {
                    std::cout << num2 << ' ';
                } else {
                    std::cout << num3 << ' ';
                }
                break;
            case 'e':
                if (currNum == 0) {
                    std::cout << num1 << std::endl;
                } else if (currNum == 1) {
                    std::cout << num2 << std::endl;
                } else {
                    std::cout << num3 << std::endl;
                }
                break;
            case 'v':
                if (currNum == 0) {
                    currNum = 1;
                } else if (currNum == 1) {
                    currNum = 2;
                } else {
                    currNum = 0;
                }
                break;
            default:
                std::cout << "invalid command" << ' ';
                break;
        }
    } while (command != 'e');
}