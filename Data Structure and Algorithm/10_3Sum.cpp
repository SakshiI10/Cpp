#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;

    if (nums.size() < 3) {
        return result;
    }

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicate elements
        }

        int target = -nums[i];
        int left = i + 1;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicate elements
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> result = threeSum(nums);

    // Print the result
    for (const auto& triplet : result) {
        std::cout << "[";
        for (int num : triplet) {
            std::cout << num << " ";
        }
        std::cout << "]";
    }

    return 0;
}
