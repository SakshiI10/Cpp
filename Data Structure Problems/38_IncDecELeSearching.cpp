// Find the maximum element in an array which is first increasing and then decreasing.

#include <iostream>
using namespace std;

void Element(int arr[], int size)
{
    cout << "The element is: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << arr[i];
        }
    }
}
int main()
{
    int arr[] = {1, 30, 40, 50, 60, 70, 23, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    Element(arr, size);
    return 0;
}