#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> m;

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];

            if (m.find(complement) != m.end())
            {
                return {m[complement], i};
            }
            m[nums[i]] = i;
        }
        return {}; // Return an empty vector if no solution is found
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the two numbers adding up to target: " << result[0] << ", " << result[1] << endl;

        cout << "Numbers: " << nums[result[0]] << ", " << nums[result[1]] << endl;
    }
    else
    {
        cout << "No solution found." << endl;
    }
    return 0;
}
