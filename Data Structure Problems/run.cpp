#include <iostream>
#include <vector>

// Function to transpose a matrix
std::vector<std::vector<int>> transposeMatrix(const std::vector<std::vector<int>>& matrix) {
    int m = matrix.size();    // Number of rows in the original matrix
    int n = matrix[0].size(); // Number of columns in the original matrix

    // Create a new matrix with dimensions n x m (transposed)
    std::vector<std::vector<int>> transposedMatrix(n, std::vector<int>(m));

    // Copy elements from the original matrix to the transposed matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    return transposedMatrix;
}

int main() {
    std::vector<std::vector<int>> originalMatrix = {{1, 2, 3}, {4, 5, 6}};

    std::vector<std::vector<int>> transposedMatrix = transposeMatrix(originalMatrix);

    // Print the transposed matrix
    for (const std::vector<int>& row : transposedMatrix) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
