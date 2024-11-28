#include <iostream>

const int MAX_SIZE = 100;

void outputPairs(int arr[MAX_SIZE], int size, int m) {
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = i; j < size; ++j) {
            if (arr[i] + arr[j] == m) {
                std::cout << '(' << arr[i] << ", " << arr[j] << ')' << std::endl;
            }
        }
    }
}