#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Reposition(int arr[], int size)
{
    int i=0;
    for (i = 0; i < size; i=i+2)
    {
        if (arr[i] > arr[i + 1])
        {
            Swap(&arr[i], &arr[i + 1]);
        }
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
    Reposition(arr, size);
    cout << "Array: ";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}