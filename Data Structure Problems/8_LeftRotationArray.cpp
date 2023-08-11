#include <iostream>
using namespace std;

void LeftRotate(int arr[], int size, int k)
{
    int mod = k % size;
    for (int i = 0; i < size; i++)
    {
        cout << arr[(mod + i) % size] << " ";
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
    LeftRotate(arr, size, 14);

    return 0;
}