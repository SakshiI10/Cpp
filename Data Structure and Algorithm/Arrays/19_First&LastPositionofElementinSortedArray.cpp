#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        auto startIt = lower_bound(nums.begin(), nums.end(), target);
        auto endIt = upper_bound(nums.begin(), nums.end(), target);

        if (startIt != nums.end() && *startIt == target)
        {
            return {static_cast<int>(distance(nums.begin(), startIt)), static_cast<int>(distance(nums.begin(), prev(endIt)))};
        }
        else
        {
            return {-1, -1}; // Target not found
        }
    }
};

int main()
{
    Solution solution;

    // Example usage:
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = solution.searchRange(nums, target);

    cout << "Indices of target " << target << " in the array: ";
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
