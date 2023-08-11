#include <iostream>
using namespace std;

void Reversal(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void Rotation(int arr[], int size, int d)
{
    Reversal(arr, 0, d - 1);
    Reversal(arr, d, size-1);
    Reversal(arr, 0, size-1);
}

int main()
{
    int arr[100], size, i = 0;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements in an array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int d;
    if (size % 2 == 0)
    {
        d = size / 2;
    }
    else
    {
        d = (size + 1) / 2;
    }
    Rotation(arr, size, d);
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}