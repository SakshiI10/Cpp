#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> result;

    if (nums.size() < 4) {
        return result;
    }

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue; // Skip duplicate elements
        }

        for (int j = i + 1; j < nums.size() - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue; // Skip duplicate elements
            }

            int left = j + 1;
            int right = nums.size() - 1;

            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];

                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});

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
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    std::vector<std::vector<int>> result = fourSum(nums, target);

    // Print the result
    for (const auto& quadruplet : result) {
        std::cout << "[";
        for (int num : quadruplet) {
            std::cout << num << " ";
        }
        std::cout << "]";
        std::cout << std::endl;
    }

    return 0;
}
