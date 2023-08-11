// Sort an array of 0s, 1s and 2s | Dutch National Flag problem.

#include <iostream>
using namespace std;

void Sort(int arr[], int size)
{
    cout << "Array: ";
    /* int temp[100], j = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 0)
            {
                temp[j] = arr[i];
                cout << temp[j] << " ";
                j++;
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 1)
            {
                temp[j] = arr[i];
                cout << temp[j] << " ";
                j++;
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == 2)
            {
                temp[j] = arr[i];
                cout << temp[j] << " ";
                j++;
            }
        } */
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sort(arr, size);
    return 0;
}