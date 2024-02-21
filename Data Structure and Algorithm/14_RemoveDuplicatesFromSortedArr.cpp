#include <iostream>
#include <vector>
#include <algorithm>

int removeDuplicates(std::vector<int>& nums) {
    // Use std::unique to rearrange the duplicates to the end of the vector
    auto it = std::unique(nums.begin(), nums.end());
    
    // Erase the duplicates at the end of the vector
    nums.erase(it, nums.end());

    // Return the size of the modified vector
    return nums.size();
}

int main() {
    std::vector<int> nums = {1, 1, 2};

    int k = removeDuplicates(nums);

    std::cout << "Output: " << k << ", nums = [";
    for (int i = 0; i < k; ++i) {
        std::cout << nums[i];
        if (i < k - 1) {
            std::cout << ",";
        }
    }
    std::cout << ", _]" << std::endl;

    return 0;
}
