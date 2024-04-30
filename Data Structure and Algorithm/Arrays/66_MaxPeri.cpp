#include <iostream>
#include <algorithm>
using namespace std;

int maxPerimeter(int arr[], int n)
{
    sort(arr, arr + n);
    int peri = -1;

    for (int i = n - 1; i >= 2; --i)
    {
        if (arr[i] < arr[i - 1] + arr[i - 2])
        {
            peri = arr[i] + arr[i - 1] + arr[i - 2];
            break;
        }
    }

    return peri;
}

int main()
{
    int arr1[] = {6, 1, 6, 5, 8, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int result = maxPerimeter(arr1, n1);

    if (result != -1)
    {
        cout << "Maximum perimeter of the triangle: " << result << endl;
    }
    else
    {
        cout << "Triangle not possible with the given array." << endl;
    }

    return 0;
}
