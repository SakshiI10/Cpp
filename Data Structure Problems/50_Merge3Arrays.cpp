// Merge 3 arrays.

#include <iostream>
using namespace std;

void Merge(int arr[], int low, int high)
{
    int temp[100], k = 0;
    for (int i = low; i < high; i++)
    {
        temp[k] = arr[i];
        cout << temp[k] << " ";
        k++;
    }
}
int main()
{
    int arr1[] = {30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {35, 45};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {10, 60, 70, 80, 100};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Merged array is: ";
    Merge(arr1, 0, size1);
    Merge(arr2, 0, size2);
    Merge(arr3, 0, size3);
    return 0;
}