#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> countOddEven(int arr[], int n)
    {
        vector<int> result;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        result.push_back(count2);
        result.push_back(count1);
        return result;
    }
};

int main()
{
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> k = sol.countOddEven(arr, n);
    return 0;
}
