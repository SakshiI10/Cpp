//Find Second largest element in an array.

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
    int max1, max2, max3;
    max1 = max2 = max3 = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max1)
        {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else
        {
            max3 = arr[i];
        }
    }
    cout << "Second largest elements is: " << max2;
    return 0;
}