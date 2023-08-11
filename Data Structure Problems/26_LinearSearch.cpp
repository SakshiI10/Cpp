// Linear Search Algorithm

#include <iostream>
using namespace std;

void LinearSearch(int arr[100], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            cout << i;
        }
    }
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
    LinearSearch(arr, size, element);
    /* int index = LinearSearch(arr, size, element);
    if (index == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element " << element << " found at index " << index;
    } */
    return 0;
}