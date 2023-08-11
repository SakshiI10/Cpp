// Count 1 in a sorted array.

#include <iostream>
using namespace std;

void Count1(int arr[], int size)
{
    cout << "Number of 1 in an array is: ";
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    int arr[] = {0, 1, 1, 1, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    Count1(arr, size);
    return 0;
}