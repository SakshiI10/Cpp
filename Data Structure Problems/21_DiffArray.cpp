// Difference Array | Range update query in O(1).

#include <iostream>
using namespace std;

void add(int arr[], int size, int start, int end, int element)
{
    for (int i = start; i <= end; i++)
    {
        arr[i] = arr[i] + element;
    }
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {10, 5, 20, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    add(arr, size, 0, 1, 10);
    add(arr, size, 1, 3, 20);
    add(arr, size, 2, 2, 30);
    return 0;
}