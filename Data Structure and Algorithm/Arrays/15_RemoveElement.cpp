#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); ++j)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main()
{
    Solution sol;
    
    vector<int> nums = {3, 2, 2, 3};
    int val = 2;
    int k = sol.removeElement(nums, val);
    
    cout << "Output: " << k << ", nums = [";
    for (int i = 0; i < k; i++)
    {
        cout << nums[i];
        if (i < k - 1)
        {
            cout << ",";
        }
    }
    cout << "]" << endl;
    return 0;
}
