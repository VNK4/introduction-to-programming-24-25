#include <iostream>

int** transposeMatrix(int** matrix, int rows, int cols) {
    int** transposed = new int* [cols];
    for (int i = 0; i < cols; i++) {
        transposed[i] = new int[rows];
        for (int j = 0; j < rows; j++) {
            transposed[i][j] = matrix[j][i];
        }
    }
    return transposed;
}

int main() {
    int rows = 2, cols = 3;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols] {1, 2, 3};
    }

    int** transposed = transposeMatrix(matrix, rows, cols);

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << transposed[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    for (int i = 0; i < cols; i++) {
        delete[] transposed[i];
    }
    delete[] matrix;
    delete[] transposed;
}