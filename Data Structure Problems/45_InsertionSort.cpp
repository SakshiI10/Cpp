// Insertion Sort Algorithm.

#include <iostream>
using namespace std;

int InsertionSort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {12, 54, 65, 7, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, size);
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}