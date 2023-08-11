// Search element in a sorted matrix.

#include <iostream>
using namespace std;

const int rows = 3;
const int columns = 3;

void Search(int matrix[rows][columns], int target)
{
    cout << "Element found at index: ";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix[i][j] == target)
            {
                cout << i << ", " << j;
            }
        }
    }
}
int main()
{
    int matrix[rows][columns] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int target = 4;
    Search(matrix, target);
    return 0;
}