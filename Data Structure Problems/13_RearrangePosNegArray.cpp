// Rearrange positive and negative numbers in O(n) time and O(1) extra space.

#include <iostream>
using namespace std;

void Rearrange(int arr[], int size)
{
    int temp[100], j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for (int j = 0; j < size; j++)
    {
        cout << temp[j] << " ";
    }
}
int main()
{
    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Rearrange(arr, size);
    return 0;
}