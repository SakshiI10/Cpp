// Determinant of a Matrix.
//**
#include <iostream>

const int size = 3; // Size of the square matrix

int determinant(int matrix[size][size]);

int subDeterminant(int matrix[size][size], int row, int col) {
    int subMatrix[size - 1][size - 1];
    int subRow = 0, subCol;

    for (int i = 0; i < size; i++) {
        if (i == row) {
            continue; // Skip the current row
        }
        subCol = 0;
        for (int j = 0; j < size; j++) {
            if (j == col) {
                continue; // Skip the current column
            }
            subMatrix[subRow][subCol] = matrix[i][j];
            subCol++;
        }
        subRow++;
    }

    return determinant(subMatrix);
}

int determinant(int matrix[size][size]) {
    int det = 0;
    int cofactor = 1;

    if (size == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }

    for (int i = 0; i < size; i++) {
        det += cofactor * matrix[0][i] * subDeterminant(matrix, 0, i);
        cofactor = -cofactor;
    }

    return det;
}

int main() {
    int matrix[size][size] = {
        {2, -3, 1},
        {4, 2, -1},
        {5, 0, 3}
    };

    int det = determinant(matrix);

    std::cout << "Determinant: " << det << std::endl;

    return 0;
}
