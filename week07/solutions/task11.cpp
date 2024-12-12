#include <iostream>

int** multiplyMatricesNxN(int** matrix1, int** matrix2, int n) {
    int** result = new int* [n];
    for (int i = 0; i < n; i++) {
        result[i] = new int[n];
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main() {
    int n = 2;
    int matrix1Data[2][2] = {
        {1, 2},
        {3, 4}
    };
    int matrix2Data[2][2] = {
        {5, 6},
        {7, 8}
    };

    int** matrix1 = new int* [n];
    int** matrix2 = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[n];
        matrix2[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix1[i][j] = matrix1Data[i][j];
            matrix2[i][j] = matrix2Data[i][j];
        }
    }

    int** result = multiplyMatricesNxN(matrix1, matrix2, n);

    std::cout << "Result matrix:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;
}
