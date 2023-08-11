// Senticel Linear Search Algorithm

#include <iostream>
using namespace std;

int SentinelLinearSearch(int arr[100], int size, int element)
{
    arr[size - 1] = element;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100], size, i, j, element;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements in an array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to be searched: ";
    cin >> element;
    int index = SentinelLinearSearch(arr, size, element);
    if (index == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element " << element << " found at index " << index;
    }
    return 0;
}