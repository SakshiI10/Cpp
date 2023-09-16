// Take a matrix input for user.

#include <iostream>
using namespace std;

int main()
{
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    int matrix[r][c];

    cout << "Enter elements of a matrix: ";
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix is: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}