#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];

        std::cout << "Iteration " << i + 1 << ": currentNum = " << nums[i] << ", complement = " << complement << std::endl;

        // Check if the complement is present in the map
        if (m.find(complement) != m.end()) {
            // If found, return the indices of the two numbers
            std::cout << "Solution found! Indices: [" << m[complement] << ", " << i << "]" << std::endl;
            return {m[complement], i};
        }

        // If complement is not found, store the current number and its index in the map
        m[nums[i]] = i;

        // Display the current state of the map
        std::cout << "Map after iteration " << i + 1 << ": ";
        for (const auto& entry : m) {
            std::cout << "(" << entry.first << ", " << entry.second << ") ";
        }
        std::cout << std::endl;
    }

    // Return an empty vector if no solution is found
    std::cout << "No solution found!" << std::endl;
    return {};
}

int main() {
    // Example usage
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    twoSum(nums, target);

    return 0;
}
