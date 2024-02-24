public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::sort(candidates.begin(), candidates.end()); // Sort to handle duplicates
        std::vector<std::vector<int>> result;
        std::vector<int> currentCombination;
        
        backtrack(candidates, target, 0, currentCombination, result);
        
        return result;
    }
    
private:
    void backtrack(const std::vector<int>& candidates, int target, int start,
                   std::vector<int>& currentCombination, std::vector<std::vector<int>>& result) {
        if (target < 0) {
            return;
        }
        
        if (target == 0) {
            result.push_back(currentCombination);
            return;
        }
        
        for (int i = start; i < candidates.size() && candidates[i] <= target; ++i) {
            currentCombination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i, currentCombination, result);
            currentCombination.pop_back();
        }
    }