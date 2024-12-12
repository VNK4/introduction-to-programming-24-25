#include <iostream>

int** addMatrices(int** matrix1, int** matrix2, int rows, int cols) {
    int** result = new int* [rows];
    for (int i = 0; i < rows; i++) {
        result[i] = new int[cols];
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int main() {
    int rows = 2, cols = 3;
    int** matrix1 = new int* [rows];
    int** matrix2 = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix1[i] = new int[cols] {1 + i, 2 + i, 3 + i};
        matrix2[i] = new int[cols] {4 + i, 5 + i, 6 + i};
    }

    int** result = addMatrices(matrix1, matrix2, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;
}