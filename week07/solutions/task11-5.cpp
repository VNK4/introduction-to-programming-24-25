#include <iostream>

int** multiplyMatrices(int** matrix1, int n, int m, int** matrix2, int s) {
    if (m <= 0) {
        std::cout << "Error: Number of columns in the first matrix does not match the number of rows in the second matrix." << std::endl;
        return nullptr;
    }

    int** result = new int* [n];
    for (int i = 0; i < n; i++) {
        result[i] = new int[s];
        for (int j = 0; j < s; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main() {
    int n = 2, m = 3, s = 2;
    int matrix1Data[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix2Data[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int** matrix1 = new int* [n];
    int** matrix2 = new int* [m];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matrix1[i][j] = matrix1Data[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        matrix2[i] = new int[s];
        for (int j = 0; j < s; j++) {
            matrix2[i][j] = matrix2Data[i][j];
        }
    }

    int** result = multiplyMatrices(matrix1, n, m, matrix2, s);

    if (result != nullptr) {
        std::cout << "Result matrix:" << std::endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s; j++) {
                std::cout << result[i][j] << " ";
            }
            std::cout << std::endl;
        }

        for (int i = 0; i < n; i++) {
            delete[] result[i];
        }
        delete[] result;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix1[i];
    }
    for (int i = 0; i < m; i++) {
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;
}
