#include <iostream>

const int MAX_SIZE = 100;

void outputArray(int arr[MAX_SIZE], int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }

    std::cout << std::endl;

    for(size_t i = size - 1; i >= 0; --i) {
        std::cout << arr[i] << ' ';
    }
}
