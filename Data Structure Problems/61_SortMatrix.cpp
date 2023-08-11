// Sort the given matrix.

/* Input: { {5, 4, 7},
            {1, 3, 8},
            {2, 9, 6} }
Output:   { {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9} } */

#include <iostream>
using namespace std;
const int rows = 3;
const int columns = 3;

void SortMatrix(int matrix[rows][columns])
{
    const int size = rows * columns;
    int arr[size];
    int k = 0;
    //Matrix into array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[k] = matrix[i][j];
            k++;
        }
    }
    //Sorting Array
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int var = arr[j];
                arr[j] = arr[i];
                arr[i] = var;
            }
        }
    }
    //Array into Matrix
    k = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = arr[k];
            k++;
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
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    cout << "Original Matrix:" << endl;
    MatrixTraversal(matrix);

    SortMatrix(matrix);

    cout << "Sorted Matrix:" << endl;
    MatrixTraversal(matrix);
    return 0;
}