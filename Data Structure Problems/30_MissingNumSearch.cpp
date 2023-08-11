// Find the Missing Number.

#include <iostream>
using namespace std;

void MissingNum(int arr[], int size)
{
    int sum = 0, sum2 = 0;
    cout << "Missig Number is: ";
    for (int i = 0; i <= (size + 1); i++)
    {
        sum = sum + i;
    }
    cout << sum << endl;
    for (int i = 0; i < size; i++)
    {
        sum2 = sum2 + arr[i];
    }
    cout << sum2 << endl;

    int sum3 = sum - sum2;
    cout << sum3 << endl;
}
int main()
{
    int arr[] = {1, 2, 4, 6, 5, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    MissingNum(arr, size);
    return 0;
}