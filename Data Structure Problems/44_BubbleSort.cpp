// Bubble Sort Algorithm.

#include <iostream>
using namespace std;

int BubbleSort(int arr[], int size)
{
    int isSorted = 0;
    for (int i = 0; i < size; i++)
    {
        isSorted = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return 0;
        }
    }
}
int main()
{
    int arr[] = {6, 0, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}