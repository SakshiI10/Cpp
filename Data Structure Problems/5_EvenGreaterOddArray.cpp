#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, i;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements in an array: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    return 0;
}