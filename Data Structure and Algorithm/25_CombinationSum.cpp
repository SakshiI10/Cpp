#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> currentCombination;
        findCombinations(candidates, target, 0, currentCombination, result);
        return result;
    }
    void findCombinations(const vector<int>& candidates, int target, int start, vector<int>& currentCombination, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(currentCombination);
            return;
        }

        for (int i = start; i < candidates.size() && candidates[i] <= target; ++i) {
            currentCombination.push_back(candidates[i]);
            findCombinations(candidates, target - candidates[i], i, currentCombination, result);
            currentCombination.pop_back();
        }
    }
};

int main() {
    Solution solution;

    std::vector<int> candidates1 = {2, 3, 6, 7};
    int target1 = 7;
    auto result1 = solution.combinationSum(candidates1, target1);

    std::cout << "Example 1:\n";
    for (const auto& combination : result1) {
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
