#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

class Solution
{
public:
    int minSum(int a[], int b[], int n)
    {
        // Finding minimum element in array A and also storing its index value.
        int minA = a[0], indexA = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < minA)
            {
                minA = a[i];
                indexA = i;
            }
        }

        // Finding minimum element in array B and also storing its index value
        int minB = b[0], indexB = 0;
        for (int i = 1; i < n; i++)
        {
            if (b[i] < minB)
            {
                minB = b[i];
                indexB = i;
            }
        }

        // If indexes of minimum elements are not same, return their sum.
        if (indexA != indexB)
            return (minA + minB);

        // When index of A is not same as previous and value is also less than other minimum Store new minimum and store its index
        int minA2 = INT_MAX, indexA2;
        for (int i = 0; i < n; i++)
        {
            if (i != indexA && a[i] < minA2)
            {
                minA2 = a[i];
                indexA2 = i;
            }
        }

        // When index of B is not same as previous and value is also less than other minimum. Store new minimum and store its index
        int minB2 = INT_MAX, indexB2;
        for (int i = 0; i < n; i++)
        {
            if (i != indexB && b[i] < minB2)
            {
                minB2 = b[i];
                indexB2 = i;
            }
        }

        // Taking sum of previous minimum of a[] with new minimum of b[] and also sum of previous minimum of b[] with new minimum of a[] and return whichever is minimum.
        return min(minB + minA2, minA + minB2);
    }
};

int main()
{
    Solution sol;
    
    int a[] = {8, 1, 11, 10, 7, 5};
    int b[] = {7, 4, 1, 5, 4, 3};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Minimum sum: " << sol.minSum(a, b, n) << endl;

    return 0;
}
