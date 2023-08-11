// Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.

#include <iostream>
using namespace std;

void Leader(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] <= arr[j])
            {
                break;
            }
        }
        if (j == size)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    Leader(arr, size);
    return 0;
}