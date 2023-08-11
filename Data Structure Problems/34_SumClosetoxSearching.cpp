// Two elements whose sum is closest to x.

#include <iostream>
using namespace std;

void Sum(int arr[], int size, int element)
{
    if (size < 2)
    {
        cout << "Array size must be at least 2." << endl;
    }
    int min_l = 0;
    int min_r = 1;
    cout << "First two elements are: ";
    int i, j, sum;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            sum = arr[i] + arr[j];
            if(sum < element){
                min_l=i;
                min_r=j;
            }
        }
    }
    cout << arr[min_l] << " and " << arr[min_r] << endl;
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    Sum(arr, size, 4);
    return 0;
}