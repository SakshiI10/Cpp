// Program to find transpose of a matrix.

#include <iostream>
using namespace std;

const int rows = 4;
const int columns = 4;
void Transpose(int matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = i; j < columns; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
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
    int matrix[rows][columns] = {{1, 1, 1, 1},
                                 {2, 2, 2, 2},
                                 {3, 3, 3, 3},
                                 {4, 4, 4, 4}};
                                 
    cout << "Original Matrix:" << endl;
    MatrixTraversal(matrix);

    Transpose(matrix);

    cout << "Sorted Matrix:" << endl;
    MatrixTraversal(matrix);

    return 0;
}
