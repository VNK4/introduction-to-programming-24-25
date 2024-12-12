#include <iostream>

void applyOperationOnMatrix(int** matrix, int rows, int cols, int operand, char operation) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            switch (operation) {
            case '+': matrix[i][j] += operand; break;
            case '-': matrix[i][j] -= operand; break;
            case '*': matrix[i][j] *= operand; break;
            case '/':
                if (operand != 0) matrix[i][j] /= operand;
                break;
            case '%':
                if (operand != 0) matrix[i][j] %= operand;
                break;
            default:
                std::cout << "Invalid operation\n";
                return;
            }
        }
    }
}

int main()
{
    int rows = 2, cols = 3, operand = 5;
    char operation = '*';
    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols] {1 + i, 2 + i, 3 + i};
    }
    applyOperationOnMatrix(matrix, rows, cols, operand, operation);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}