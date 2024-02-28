#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        for (int i = 1; ; ++i) {
            if (numSet.find(i) == numSet.end()) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    // Example 1
    vector<int> nums1 = {1, 2, 0};
    int result1 = solution.firstMissingPositive(nums1);
    cout << "Example 1: " << result1 << endl;
    return 0;
}
