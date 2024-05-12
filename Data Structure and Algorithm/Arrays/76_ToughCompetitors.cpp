#include <algorithm> // for sort
#include <cmath>     // for abs
#include <iostream>  // for cout
using namespace std;

class Solution
{
public:
    int toughCompetitor(int *arr, int n)
    {
        sort(arr, arr + n);
        int diff = abs(arr[0] - arr[1]);

        for (int i = 1; i < n - 1; ++i)
        {
            int current_diff = abs(arr[i] - arr[i + 1]);
            if (current_diff < diff)
            {
                diff = current_diff;
            }
        }
        
        return diff;
    }
};

int main()
{
    int arr1[] = {9, 4, 12, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    Solution s1;
    cout << "Example 1 Output: " << s1.toughCompetitor(arr1, n1) << endl;

    int arr2[] = {4, 9, 1, 32, 12};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    Solution s2;
    cout << "Example 2 Output: " << s2.toughCompetitor(arr2, n2) << endl;

    return 0;
}
