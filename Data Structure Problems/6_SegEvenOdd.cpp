//Segregate even and odd numbers of an array.

#include <iostream>
using namespace std;

void Segregate(int arr[], int size)
{
    int temp[100], j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    cout << "Array: ";
    for (j = 0; j < size; j++)
    {
        cout << temp[j] << " ";
    }
}
int main()
{
    int arr[100], size, i = 0;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements in an array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Segregate(arr, size);
    return 0;
}