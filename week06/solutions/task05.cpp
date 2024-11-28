#include <iostream>

const int MAX_SIZE = 100;

void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void reverseArr(int arr[MAX_SIZE], int size) {
    for(size_t i = 0; i < size / 2; ++i) {
       swap(&arr[i], &arr[size - 1 - i]); 
    }
}