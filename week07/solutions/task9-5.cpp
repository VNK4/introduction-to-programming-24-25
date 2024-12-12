#include <iostream>

bool isMagicSquareNxN(int** matrix, int n) {
    int magicSum = 0;

    for (int i = 0; i < n; i++) {
        magicSum += matrix[0][i];
    }

    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum) {
            return false;
        }
    }

    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < n; i++) {
        diag1 += matrix[i][i];
        diag2 += matrix[i][n - i - 1];
    }

    return diag1 == magicSum && diag2 == magicSum;
}
int main() {
    int n = 3;
    int exampleMatrix[3][3] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = exampleMatrix[i][j];
        }
    }

    std::cout << (isMagicSquareNxN(matrix, n) ? "Magic Square" : "Not Magic Square") << std::endl;

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}
