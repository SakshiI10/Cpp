// **Print All Distinct Elements of a given integer array.

#include <iostream>
using namespace std;

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

    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }
}