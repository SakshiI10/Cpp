// Majority Element.

#include <iostream>
using namespace std;

void Majority(int arr[], int size)
{
    int maxcount = 0, index = 0;
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            index = i;
        }
    }
    cout << "Majority element is: " << arr[index] << endl;
    cout << "It occurs: " << maxcount << " times" << endl;
}
int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    Majority(arr, size);
    return 0;
}