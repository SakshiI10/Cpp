// Squares of Matrix Diagonal Elements.

#include <iostream>
using namespace std;

void SquareDiagonal(int matrix[100][100], int rows, int columns)
{
    // For first diagonal
    cout << "First diagonal: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == j)
            {
                cout << matrix[i][j] * matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
    // FOr second diagonal
    cout << "Second diagonal: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i + j == columns - 1)
            {
                cout << matrix[i][j] * matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int matrix[100][100];

    cout << "Enter elements of a matrix: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    SquareDiagonal(matrix, rows, columns);
    return 0;
}
