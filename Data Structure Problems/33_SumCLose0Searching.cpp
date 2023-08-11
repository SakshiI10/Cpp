// Two elements whose sum is closest to 0.

#include <iostream>
using namespace std;

void Sum(int arr[], int size)
{
    if (size < 2)
    {
        cout << "Array size must be at least 2." << endl;
    }
    int min_l = 0;
    int min_r = 1;
    int min_sum = arr[min_l] + arr[min_r];
    int sum = 0;
    cout << "Sum closest to zero is: ";
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            if (sum < min_sum)
            {
                min_l = i;
                min_r = j;
            }
        }
    }
    cout << arr[min_l] << " and " << arr[min_r] << endl;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sum(arr, size);
    return 0;
}