#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int counter = 0;
    int input = 0;

    do {
        std::cin >> input;
        if(input == n) {
            ++counter;
        }
    } while(input != -1);

    std::cout << counter << std::endl;
}