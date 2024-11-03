#include <iostream>

int main() {
    int input = 0;
    int possible_num = -1;
    int counter = 0;

    std::cin >> input;

    while (input != -1) {
        if (input == possible_num) {
            ++counter;
        } else if (counter == 0) {
            possible_num = input;
            ++counter;
        } else {
            --counter;
        }

        std::cin >> input;
    }

    std::cout << possible_num << std::endl;
}