// Rotate Matrix Elements.

/* Input:
1    2    3
4    5    6
7    8    9

Output:
4    1    2
7    5    3
8    9    6 */

#include <iostream>
using namespace std;

const int rows = 3;
const int columns = 3;

void RotateMatrix(int matrix[rows][columns])
{
    // Transpose the matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < columns; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse the columns
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0, k = columns - 1; j < k; j++, k--)
        {
            swap(matrix[i][j], matrix[i][k]);
        }
    }
}

void MatrixTraversal(int matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int matrix[rows][columns] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    cout << "Orifinal Matrix" << endl;
    MatrixTraversal(matrix);
    RotateMatrix(matrix);
    cout << "Rotated Matrix" << endl;
    MatrixTraversal(matrix);
    return 0;
}