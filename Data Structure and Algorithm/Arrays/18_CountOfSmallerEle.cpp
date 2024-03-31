#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countOfElements(int arr[], int n, int x)
    {
        vector<int> v;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < x)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int arr[] = {1, 2, 5, 5, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int result = sol.countOfElements(arr, n, x);
    cout << result;
    return 0;
}
