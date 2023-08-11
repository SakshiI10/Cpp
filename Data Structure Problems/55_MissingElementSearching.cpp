// Find missing elements of a range.

#include <iostream>
using namespace std;

void MissingNum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        // cout << arr[i] << " ";
    }
    // cout << "\n";
    cout << "Missing elements is/are: ";
    for (int i = arr[0]; i < arr[size - 1]; i++)
    {
        bool Check = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == i)
            {
                Check = true;
                break;
            }
        }
        if(!Check){
            cout << i << " ";
        }
    }
}
int main()
{
    int arr[] = {11, 10, 12, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    MissingNum(arr, size);
    return 0;
}