#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
        int mid = n / 2;
        int sumLeft = 0, sumRight = 0;

        // Calculate the sum of the left half of the array
        for (int i = 0; i < mid; i++)
        {
            sumLeft += a[i];
        }

        // Calculate the sum of the right half of the array
        for (int i = mid; i < n; i++)
        {
            sumRight += a[i];
        }

        // Calculate the absolute difference between the sums
        int diff = abs(sumRight - sumLeft);
        return diff;
    }
};

int main()
{
    Solution sol;
    int arr1[] = {1, 5, 3, 2};
    int n1 = 4;
    cout << "Output for {1, 5, 3, 2}: " << sol.minValueToBalance(arr1, n1) << endl;

    int arr2[] = {1, 2, 1, 2, 1, 3};
    int n2 = 6;
    cout << "Output for {1, 2, 1, 2, 1, 3}: " << sol.minValueToBalance(arr2, n2) << endl;

    return 0;
}
