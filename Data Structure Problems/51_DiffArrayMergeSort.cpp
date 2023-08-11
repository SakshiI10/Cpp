#include <iostream>
using namespace std;

void Sort(int temp[], int size)
{
    cout << "Merged and sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (temp[i] > temp[j])
            { 
                int var = temp[j];
                temp[j] = temp[i];
                temp[i] = var;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
}

void MergeAndSort(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3)
{
    int mergedSize = size1 + size2 + size3;
    int mergedArray[mergedSize];

    for (int i = 0; i < size1; i++)
    {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        mergedArray[size1 + i] = arr2[i];
    }
    for (int i = 0; i < size3; i++)
    {
        mergedArray[size1 + size2 + i] = arr3[i];
    }
    cout << "Merged Array is: ";
    for (int i = 0; i < mergedSize; i++)
    {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
    Sort(mergedArray, mergedSize);
}

int main()
{
    int arr1[] = {30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {35, 45};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {10, 60, 70, 80, 100};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    MergeAndSort(arr1, size1, arr2, size2, arr3, size3);
    return 0;
}


/* 
// Merge 3 arrays.

#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            B[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}
void MergeSort(int arr[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}
void mergeThreeArrays(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3) {
    int mergedSize = size1 + size2 + size3;
    int mergedArray[mergedSize];
    int k = 0;

    for (int i = 0; i < size1; i++) {
        mergedArray[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < size2; i++) {
        mergedArray[k] = arr2[i];
        k++;
    }

    for (int i = 0; i < size3; i++) {
        mergedArray[k] = arr3[i];
        k++;
    }

    MergeSort(mergedArray, 0, mergedSize - 1);

    cout << "Merged and sorted array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {35, 45};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {10, 60, 70, 80, 100};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    mergeThreeArrays(arr1, size1, arr2, size2, arr3, size3);
    return 0;
} */