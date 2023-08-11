// Two elements whose difference is  x.

#include <iostream>
using namespace std;

int Sum(int arr[], int size, int element)
{
    if (size < 2)
    {
        cout << "Array size must be at least 2." << endl;
    }
    int min_l = 0;
    int min_r = 1;
    int l, r, sum;
    cout << "First 2 elements are: ";
    for (l = 0; l < size; l++)
    {
        for (r = l + 1; r < size; r++)
        {
            sum = arr[r] - arr[l];
            if (sum == element)
            {
                min_l = l;
                min_r = r;
            }
        }
    }
    cout << arr[min_l] << " and " << arr[min_r] << "\n";
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sum(arr, size, 4);
    return 0;
}