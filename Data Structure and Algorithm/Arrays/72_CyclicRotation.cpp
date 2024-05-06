#include <iostream>
#include <algorithm>
using namespace std;

void rotate(int arr[], int n)
{
    // rotate(arr, arr + n - 1, arr + n);

    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

int main()
{
    int N1 = 5;
    int A1[] = {1, 2, 3, 4, 5};
    rotate(A1, N1);
    for (int i = 0; i < N1; ++i)
    {
        cout << A1[i] << " ";
    }
    cout << endl;

    int N2 = 8;
    int A2[] = {9, 8, 7, 6, 4, 2, 1, 3};
    rotate(A2, N2);
    for (int i = 0; i < N2; ++i)
    {
        cout << A2[i] << " ";
    }
    cout << endl;

    return 0;
}
