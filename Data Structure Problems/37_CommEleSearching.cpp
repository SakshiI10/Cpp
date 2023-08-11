// Find common elements in three sorted arrays.

#include <iostream>
using namespace std;

void CommEle(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{
    cout << "Common element is: ";
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            for (int k = 0; k < size3; k++)
            {
                if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
                {
                    cout << arr1[i] << " ";
                }
            }
        }
    }
}
int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {6, 7, 20, 80, 100};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    CommEle(arr1, arr2, arr3, size1, size2, size3);
    return 0;
}