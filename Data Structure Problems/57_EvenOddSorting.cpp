// Sort even-placed elements in increasing and odd-placed in decreasing order.
#include <iostream>
using namespace std;

int SelectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        // cout << arr[i] << " ";
    }
}

void Merge(int arr[], int size)
{
    SelectionSort(arr, size);
    int B[100], j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            B[j] = arr[i];
            j++;
        }
    }
    for (int i = size; i >=0; i--)
    {
        if (arr[i] % 2 != 0)
        {
            B[j] = arr[i];
            j++;
        }
    }
    for (int j = 0; j < size; j++)
    {
        cout << B[j] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Merge(arr, size);
    return 0;
}