#include <iostream>
#include <string>
using namespace std;

string answer(int a[], int n)
{
    // Calculating the difference between first two elements
    int k = a[0] - a[1];

    // If the array size is even, middle element is not 1, or the difference is 0, return "No"
    if (n % 2 == 0 || a[n / 2] != 1 || k == 0)
        return "No";
    else
    {
        int flag = 0;
        // Checking the pattern in the array
        for (int i = 1; i < n - 1; i++)
        {
            if (i < (n / 2))
            {
                // If the pattern is not followed before the middle element, set flag to 1 and break
                if (a[i] != (a[i + 1] + k))
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                // If the pattern is not followed after the middle element, set flag to 1 and break
                if (a[i] != (a[i + 1] - k))
                {
                    flag = 1;
                    break;
                }
            }
        }
        // If flag is 1, return "No", otherwise return "Yes"
        if (flag)
            return "No";
        else
            return "Yes";
    }
}

int main()
{
    // Example 1
    int arr1[] = {2, 1, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Example 1:\n";
    cout << "Input: {2, 1, 2}\nOutput: " << answer(arr1, n1) << "\n\n";

    // Example 2
    int arr2[] = {4, 3, 2, 3, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Example 2:\n";
    cout << "Input: {4, 3, 2, 3, 4}\nOutput: " << answer(arr2, n2) << "\n\n";

    // Additional example
    int arr3[] = {1, 1, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    cout << "Additional Example:\n";
    cout << "Input: {1, 1, 1}\nOutput: " << answer(arr3, n3) << "\n";

    return 0;
}
