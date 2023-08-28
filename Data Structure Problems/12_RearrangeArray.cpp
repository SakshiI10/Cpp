// Rearrange an array such that arr[i] = i.

#include <iostream>
using namespace std;

void Rearrange(int arr[], int size)
{
    int temp[100], j = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == i)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        if (arr[i] != i)
        {
            arr[i] = -1;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1};
    int size = sizeof(arr) / sizeof(arr[0]);
    Rearrange(arr, size);
    return 0;
}