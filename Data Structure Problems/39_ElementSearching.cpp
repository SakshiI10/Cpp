// Given Array of size n and a number k, find all elements that appear more than n/k times.

#include <iostream>
using namespace std;

void Element(int arr[], int size, int k)
{
    cout << "The element is: ";
    int d = size / k;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > d)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 5, 4, 2, 2, 3, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    Element(arr, size, k);
    return 0;
}