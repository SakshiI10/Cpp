// Array Traversal, Insertion, Deletion and Searching.

#include <iostream>
using namespace std;

void traversal(int arr[100], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion(int arr[100], int size, int index, int element)
{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

void deletion(int arr[100], int size, int index, int element)
{
    for (int i = index; i <= size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100], size, i;

    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter elements of array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    traversal(arr, size);

    insertion(arr, size, 3, 10);
    size = size + 1;
    cout << "\n";
    traversal(arr, size);

    deletion(arr, size, 3, 10);
    size = size - 1;
    cout << "\n";
    traversal(arr, size);

    return 0;
}