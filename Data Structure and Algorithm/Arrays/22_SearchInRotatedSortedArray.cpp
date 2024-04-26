#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
        }
        return -1; // Return -1 if the target is not found
    }
};

int main()
{
    Solution sol;
    
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    int result = sol.search(nums, target);
    cout << result;
    return 0;
}
