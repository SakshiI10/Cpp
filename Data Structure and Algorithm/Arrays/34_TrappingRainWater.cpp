#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = height.size();
        if (n <= 2) {
            return 0;  // No trapping possible with less than 3 bars
        }

        std::vector<int> leftMax(n, 0), rightMax(n, 0);

        leftMax[0] = height[0];
        for (int i = 1; i < n; ++i) {
            leftMax[i] = std::max(leftMax[i - 1], height[i]);
        }

        rightMax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            rightMax[i] = std::max(rightMax[i + 1], height[i]);
        }

        int trappedWater = 0;
        for (int i = 0; i < n; ++i) {
            trappedWater += std::max(0, std::min(leftMax[i], rightMax[i]) - height[i]);
        }

        return trappedWater;
    }
};

int main() {
    // Example 1
    std::vector<int> height1 = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    Solution solution1;
    int result1 = solution1.trap(height1);
    std::cout << "Example 1: Trapped Water = " << result1 << std::endl;

    // Example 2
    std::vector<int> height2 = {4, 2, 0, 3, 2, 5};
    Solution solution2;
    int result2 = solution2.trap(height2);
    std::cout << "Example 2: Trapped Water = " << result2 << std::endl;

    return 0;
}
