#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        backtrack(result, candidates, current, target, 0);
        return result;
    }
    void backtrack(vector<vector<int>> &result, const vector<int> &candidates, vector<int> &current, int remaining, int start)
    {
        // If the remaining target becomes negative, backtrack
        if (remaining < 0)
        {
            return;
        }
        // If the remaining target becomes zero, add the current combination to the result
        if (remaining == 0)
        {
            result.push_back(current);
            return;
        }
        // Loop through the candidates starting from the specified index
        for (int i = start; i < candidates.size(); ++i)
        {
            // Skip duplicates to avoid duplicate combinations
            if (i > start && candidates[i] == candidates[i - 1])
            {
                continue;
            }
            // Include the current candidate in the combination
            current.push_back(candidates[i]);
            // Recursive call to continue exploring combinations with the updated remaining target and index
            backtrack(result, candidates, current, remaining - candidates[i], i + 1);
            // Backtrack by removing the last added candidate to explore other possibilities
            current.pop_back();
        }
    }
};

int main()
{
    Solution solution;
    // Example 1
    vector<int> candidates1 = {10, 1, 2, 7, 6, 1, 5};
    int target1 = 8;
    auto result1 = solution.combinationSum2(candidates1, target1);
    cout << "Example 1 Output:\n";
    for (const auto &combination : result1)
    {
        cout << "[";
        for (int num : combination)
        {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}