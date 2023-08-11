//Exponential Search Algorithm.

#include <iostream>
using namespace std;

int BinarySearch(int arr[100], int low, int high, int element);

int ExponentialSearch(int arr[100], int size, int element){
    if(arr[0]==element){
        return 0;
    }
    int i=1;
    while(i<size && arr[i]<=element){
        i=i*2;
        return BinarySearch(arr, i/2, min(i, size-1), element);
    }
}

int BinarySearch(int arr[100], int low, int high, int element)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] >= element)
        {
            high = mid-1;
        }
        if (arr[mid] <= element)
        {
            low = mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[100], size, i, j, element, low, high;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements in an array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to be searched: ";
    cin >> element;

    int index=ExponentialSearch(arr, size, element);
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