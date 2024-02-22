#include <vector>
#include <algorithm>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        std::vector<int> SortedArr(nums);
        sort(SortedArr.begin(), SortedArr.end());
        for(int i = 0; i < SortedArr.size(); i++){
            if(SortedArr[i] == val){
                SortedArr.erase(SortedArr.begin() + i);
                i--;  // Adjust index after erasing an element
            }
        }
        nums = SortedArr;  // Update the original nums vector
        return nums.size();
    }
};
