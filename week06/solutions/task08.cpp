#include <iostream>

const int MAX_SIZE = 100;

int sameElements(int arr1[MAX_SIZE], int arr2[MAX_SIZE], int size) {
    int result = 0;
    for (size_t i = 0; i < size; ++i)
    {
        if(arr1[i] == arr2[i]) {
            ++result;
        }
    }
    return result; 
}