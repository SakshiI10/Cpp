// Reorder an array according to given indexes.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 0, 3, 2, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (arr[j] == i)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] != i)
        {
            arr[i] = -1;
        }
    }
    cout << "Array: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}