// Sort an array in wave form
/* Given an unsorted array of integers, sort the array into a wave array. An array arr[0..n-1] is sorted in wave form if:
arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= … */

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
/*     cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n"; */

    for (int i = 0; i < size; i=i+2)
    {
        if (arr[i + 1] > arr[i] && arr[i + 1] < arr[i + 2])
        {
            swap(&arr[i+1], &arr[i]);
        }
    }

    cout << "Wave form Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sort(arr, size);
    return 0;
}