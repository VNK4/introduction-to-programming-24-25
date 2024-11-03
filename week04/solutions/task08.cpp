#include <iostream>

int main() {
    int n = 0;
    int m = 0;
    std::cin >> n >> m;

    int counter = 0;
    int input = 0;

    do {
        std::cin >> input;
        if(m != 0) {
            if(input == n) {
                --m;
            }
            ++counter;
        }
    } while(input != -1);

    if(m != 0) {
        std::cout << "No such subsequence exists" << std::endl;
    } else {
        std::cout << counter << std::endl;
    }
}