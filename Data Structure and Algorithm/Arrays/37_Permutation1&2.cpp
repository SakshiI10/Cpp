#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do
        {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        return result;
    }
};

int main()
{
    Solution solution;

    vector<int> nums1 = {1, 2, 3};
    vector<vector<int>> result1 = solution.permute(nums1);
    
    cout << "Example 1:\n";
    for (const auto &perm : result1)
    {
        for (int num : perm)
        {
            cout << num << ' ';
        }
        cout << '\n';
    }
    return 0;
}