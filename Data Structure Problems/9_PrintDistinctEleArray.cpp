// Print All Distinct Elements of a given integer array.

#include <iostream>
using namespace std;

void DistinctEle(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j, count = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
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
    cout << "Array: ";
    DistinctEle(arr, size);
}