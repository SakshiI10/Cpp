#include <iostream>
using namespace std;

void rotate(int arr[], int n, int startIndex)
{
    // Store the elements to be rotated
    int rotatedElements[startIndex];
    for (int i = 0; i < startIndex; ++i)
        rotatedElements[i] = arr[i];

    // Shift elements to the left
    for (int i = startIndex; i < n; ++i)
        arr[i - startIndex] = arr[i];

    // Place the rotated elements at the end
    for (int i = 0; i < startIndex; ++i)
        arr[n - startIndex + i] = rotatedElements[i];
}

int main()
{
    int A1[] = {1, 2, 3, 4, 5};
    rotate(A1, 5, 2);
    for (int i = 0; i < 5; ++i)
        cout << A1[i] << " ";
    cout << endl;

    int A2[] = {9, 8, 7, 6, 4, 2, 1, 3};
    rotate(A2, 8, 4);
    for (int i = 0; i < 8; ++i)
        cout << A2[i] << " ";
    cout << endl;

    return 0;
}
