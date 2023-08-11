// Find the first repeating element in an array of integers.

#include <iostream>
using namespace std;

void fre(int arr[], int size)
{
    cout << "First repeating element is: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    fre(arr, size);
    return 0;
}