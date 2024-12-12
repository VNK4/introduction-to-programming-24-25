#include <iostream>

void calculateMatrixStats(int** matrix, int rows, int cols, int& sum, float& average, int& max, int& min) {
    sum = 0;
    max = INT_MIN;
    min = INT_MAX;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
            if (matrix[i][j] > max) max = matrix[i][j];
            if (matrix[i][j] < min) min = matrix[i][j];
        }
    }
    average = static_cast<float>(sum) / (rows * cols);
}

int main() {
    int rows = 2, cols = 3;
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols] {1, 2, 3};
    }

    int sum, max, min;
    float average;
    calculateMatrixStats(matrix, rows, cols, sum, average, max, min);

    std::cout << "Sum: " << sum << ", Average: " << average
        << ", Max: " << max << ", Min: " << min << std::endl;

    // Free memory
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}