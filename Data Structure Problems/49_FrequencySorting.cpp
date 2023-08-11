// Sort Elements by Frequency.

#include <iostream>
using namespace std;

void FreqSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        // Check if the element has already been printed
        bool printed = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                printed = true;
                break;
            }
        }

        if (printed)
        {
            continue;
        }

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}
int main()
{
    int arr[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    FreqSort(arr, size);
    return 0;
}