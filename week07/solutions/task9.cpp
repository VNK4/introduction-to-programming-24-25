#include <iostream>

bool isMagicSquare3x3(int matrix[3][3]) {
    int magicSum = 0;
    for (int i = 0; i < 3; i++) magicSum += matrix[0][i];

    for (int i = 0; i < 3; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum) return false;
    }

    int firstDiagonal = matrix[0][0] + matrix[1][1] + matrix[2][2];
    int secondDiagonal = matrix[0][2] + matrix[1][1] + matrix[2][0];
    return firstDiagonal == magicSum && secondDiagonal == magicSum;
}

int main() {
    int square[3][3] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };
    std::cout << (isMagicSquare3x3(square) ? "Magic Square" : "Not Magic Square") << std::endl;
}