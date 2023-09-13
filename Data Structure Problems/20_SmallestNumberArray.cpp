// Find the smallest missing number.

#include <iostream>
using namespace std;

void SmallestNum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i)
        {
            cout << i;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number is: ";
    SmallestNum(arr, size);
    return 0;
}