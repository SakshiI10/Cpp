// Find the Rotation Count in Rotated Sorted array.

#include <iostream>
using namespace std;

int CountRotation(int arr[], int size)
{
    int MinVal = arr[0], MinInd = 0;
    for (int i = 0; i < size; i++)
    {
        if (MinVal > arr[i])
        {
            MinVal = arr[i];
            MinInd = i;
        }
    }
    return MinInd;
}
int main()
{
    int arr[] = {15, 18, 2, 3, 6, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int RCount = CountRotation(arr, size);
    cout << RCount;
    return 0;
}