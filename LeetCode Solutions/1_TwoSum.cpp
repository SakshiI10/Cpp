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
        vector<int> v;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (m.find(target - nums[i]) != m.end())
            {
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};
int main()
{
    Solution solution;  
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);
    if (result.size() == 2) {
        cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    return 0;
}