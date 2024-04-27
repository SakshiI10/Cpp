#include <iostream>
using namespace std;

class Solution
{
public:
    int SumArray(int arr[], int n)
    {
        // Calculate the total sum
        int totalSum = 0;
        for (int i = 0; i < n; ++i)
        {
            totalSum += arr[i];
        }

        // Output the sum array
        for (int i = 0; i < n; ++i)
        {
            cout << totalSum - arr[i];
            if (i < n - 1)
            {
                cout << " ";
            }
        }
    }
};

int main()
{
    Solution sol;
    int arr[] = {3, 6, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sol.SumArray(arr, n);
    
    return 0;
}
