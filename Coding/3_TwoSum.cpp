class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> m;
        vector <int> v;
        
        for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        
        if (m.find(complement) != m.end()) {
            return {m[complement], i};
        }
        m[nums[i]] = i;
    }
    return {}; // Return an empty vector if no solution is found
}
};