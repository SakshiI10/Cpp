// Reorder an array according to given indexes.

#include <iostream>
using namespace std;

void Reorder(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == i)
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        if (arr[i] != i)
        {
            arr[i] = -1;
        }
    }
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {1, 0, 3, 2, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Reorder(arr, size);
    return 0;
}