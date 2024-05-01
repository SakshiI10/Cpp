#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long solve(int arr[], int n, int k)
    {
        // Sort the array
        sort(arr, arr + n);

        // Initialize sums
        long long sum1 = 0, sum2 = 0;

        // Calculate sum of first k elements
        for (int i = 0; i < k; i++)
        {
            sum1 += arr[i];
        }

        // Calculate sum of remaining elements
        for (int i = k; i < n; i++)
        {
            sum2 += arr[i];
        }

        // Return maximum absolute difference
        return max(abs(sum2 - sum1), abs(sum1 - sum2));
    }
};

int main()
{
    // Example 1
    int arr1[] = {8, 4, 5, 2, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    Solution sol1;
    cout << "Example 1: " << sol1.solve(arr1, n1, k1) << endl;

    // Example 2
    int arr2[] = {1, 1, 1, 1, 1, 1, 1, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    Solution sol2;
    cout << "Example 2: " << sol2.solve(arr2, n2, k2) << endl;

    return 0;
}
