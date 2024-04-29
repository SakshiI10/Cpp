#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= target)
            {
                return i;
            }
        }
        return i;
    }
};

int main()
{
    Solution solution;

    vector<int> nums = {1, 3, 5, 6};
    int target = 4;
    int insertIndex = solution.searchInsert(nums, target);

    cout << "Insert index for target " << target << " in the array: " << insertIndex << endl;

    return 0;
}
