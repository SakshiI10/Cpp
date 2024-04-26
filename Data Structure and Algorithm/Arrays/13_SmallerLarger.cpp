#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> getMoreAndLess(int arr[], int n, int x)
    {
        int less = 0;
        int more = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= x)
            {
                less++;
            }
            else
            {
                more++;
            }
        }

        return {less, more};
    }
};
int main()
{
    Solution sol;
    
    int arr[] = {3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;

    vector<int> result = sol.getMoreAndLess(arr, n, x);

    // Output the result
    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}
