// Perform Row wise traversal of a matrix.

#include <iostream>
using namespace std;

const int rows = 3;
const int columns = 4;
void ColTraversal(int matrix[rows][columns])
{
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << matrix[j][i] << " ";
        }
    }
}
int main()
{
    int matrix[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    ColTraversal(matrix);
    return 0;
}