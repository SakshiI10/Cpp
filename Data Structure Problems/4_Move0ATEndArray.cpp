#include <iostream>
using namespace std;

void MoveZero(int arr[], int size)
{
    int temp[100], j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    while (j < size)
    {
        temp[j] = 0;
        j++;
    }
    cout << "Array: ";
    for (j = 0; j < size; j++)
    {
        cout << temp[j] << " ";
    }
}
int main()
{
    int arr[100], size, i;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements in an array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    MoveZero(arr, size);
    return 0;
}