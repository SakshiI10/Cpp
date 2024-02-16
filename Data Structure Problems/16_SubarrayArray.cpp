// Smallest subarray with sum greater than a given value.

#include <iostream>
using namespace std;

void Subarray(int arr[], int size, int sum)
{
    int sub = 0;
    for (int i = 0; i < size; i++)
    {
        if (sub < sum)
        {
            sub = sub + arr[i];
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    cout << "Sub array: ";
    Subarray(arr, size, sum);
    return 0;
}