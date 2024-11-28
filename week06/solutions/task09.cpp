#include <iostream>

const int MAX_SIZE = 100;

bool all(bool arr[MAX_SIZE], int size) {
    for (size_t i = 0; i < size; ++i) {
        if (!arr[i]) {
            return false;
        }
    }
    return true;
}

bool any(bool arr[MAX_SIZE], int size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr[i]) {
            return true;
        }
    }
    return false;
}