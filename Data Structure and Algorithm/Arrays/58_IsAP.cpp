#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool checkIsAP(int arr[], int n)
    {
        sort(arr, arr + n);

        if (n <= 2)
        {
            return true;
        }

        int diff = arr[1] - arr[0];
        for (int i = 1; i < n; i++)
        {
            if ((arr[i] - arr[i - 1]) != diff)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;

    int arr[] = {0, 12, 4, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool result = sol.checkIsAP(arr, n);
    if (result == 1)
    {
        cout << "AP";
    }
    else
    {
        cout << "Not an AP";
    }
    return 0;
}