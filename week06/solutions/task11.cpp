#include <iostream>

const int MAX_SIZE = 100;

void saveMax(int arr1[MAX_SIZE], int arr2[MAX_SIZE], int arr1Size, int arr2Size, int result[MAX_SIZE]) {
    for(size_t i = 0; i < arr1Size; ++i) {
        result[i] = arr1[i];
    }
    for(size_t i = 0; i < arr2Size; ++i) {
        result[i] = arr2[i] > result[i] ? arr2[i] : result[i];
    }
}