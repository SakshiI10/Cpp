#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long minProduct(int arr[], int n, int k)
    {
        // Sort the array in ascending order
        sort(arr, arr + n);

        long long result = 1;

        // If there are negative numbers, consider them in pairs to get a positive product
        for (int i = 0; i < k; ++i)
        {
            result *= arr[i];
        }

        return result;
    }
};

int main()
{
    Solution solution;

    int arr[] = {10, 20, 3, 4, 5};
    int k = 2;

    cout << "Output: " << solution.minProduct(arr, sizeof(arr) / sizeof(arr[0]), k) << endl;

    return 0;
}
