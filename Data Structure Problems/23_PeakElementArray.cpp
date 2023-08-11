// Find a peak element.

#include <iostream>
using namespace std;
void PeakElement(int arr[], int size)
{
    cout << "Peak Element is: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 3, 20, 4, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    PeakElement(arr, size);
    return 0;
}