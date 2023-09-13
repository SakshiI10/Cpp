#include <iostream>
using namespace std;

int main()
{
    int R, C;
    cin >> R >> C;
    int matrix[R][C];

    // Input values into the matrix
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int Row = -1, maxsum = 0;

    for (int i = 0; i < R; i++)
    {
        int sum = 0;
        for (int j = 0; j < C; j++)
        {
            sum = sum + matrix[i][j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            Row = i;
        }
    }

    cout << "Row " << (Row + 1) << " has the most parking spaces full with " << maxsum << " spaces." << endl;

    return 0;
}
