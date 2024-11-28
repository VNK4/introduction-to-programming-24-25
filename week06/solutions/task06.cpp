#include <iostream>

const int MAX_SIZE = 100;

double dotProduct(double vector1[MAX_SIZE], double vector2[MAX_SIZE], int size) {
    double result = 0;
    for (size_t i = 0; i < size; ++i) {
        result += vector1[i] * vector2[i];
    }
    return result;
}