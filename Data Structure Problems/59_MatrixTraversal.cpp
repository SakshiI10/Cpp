// Perform ROw-wise and Column--wise traversal of a matrix;
// i) Row wise traversal:

/* #include <iostream>
using namespace std;

const int rows = 3;
const int columns = 4;

void RowTraversal(int matrix[rows][columns])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int matrix[rows][columns] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};
    RowTraversal(matrix);
    return 0;
} */

// ii) Column wise traversal:

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
        cout << endl;
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