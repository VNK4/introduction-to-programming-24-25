#include <iostream>

const int MAX_SIZE = 100;

int evenSum(int arr[MAX_SIZE], int size) {
    int result = 0;
    for(size_t i = 0; i < size; ++i) {
        result += arr[i] % 2 == 0 ? arr[i] : 0;
    }
    return result;
}