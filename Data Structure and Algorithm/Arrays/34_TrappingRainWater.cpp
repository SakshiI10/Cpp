#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        if (n <= 2)
        {
            return 0; // No trapping possible with less than 3 bars
        }

        vector<int> leftMax(n, 0), rightMax(n, 0);

        leftMax[0] = height[0];
        for (int i = 1; i < n; ++i)
        {
            leftMax[i] = max(leftMax[i - 1], height[i]);
        }

        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; --i)
        {
            rightMax[i] = max(rightMax[i + 1], height[i]);
        }

        int trappedWater = 0;
        for (int i = 0; i < n; ++i)
        {
            trappedWater += max(0, min(leftMax[i], rightMax[i]) - height[i]);
        }

        return trappedWater;
    }
};

int main()
{
    // Example 1
    vector<int> height1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    Solution solution1;
    int result1 = solution1.trap(height1);
    cout << "Example 1: Trapped Water = " << result1 << std::endl;

    // Example 2
    vector<int> height2 = {4, 2, 0, 3, 2, 5};
    Solution solution2;
    int result2 = solution2.trap(height2);
    cout << "Example 2: Trapped Water = " << result2 << std::endl;

    return 0;
}
