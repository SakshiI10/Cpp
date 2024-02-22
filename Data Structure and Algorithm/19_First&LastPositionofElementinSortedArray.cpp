class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto startIt = lower_bound(nums.begin(), nums.end(), target);
        auto endIt = upper_bound(nums.begin(), nums.end(), target);

        if (startIt != nums.end() && *startIt == target) {
            /* The result vector is constructed using the brace-enclosed initializer list: {static_cast<int>(distance(nums.begin(), startIt)), static_cast<int>(distance(nums.begin(), prev(endIt)))}.
            
            distance(nums.begin(), startIt) gives the index of the starting position of the target in the array.
            
            distance(nums.begin(), prev(endIt)) gives the index of the ending position of the target in the array.
            
            The static_cast<int> is used to explicitly convert the result of distance (which is of type std::ptrdiff_t) to int to avoid narrowing conversion warnings. */
            return {static_cast<int>(distance(nums.begin(), startIt)), static_cast<int>(distance(nums.begin(), prev(endIt)))};
        } else {
            return {-1, -1};  // Target not found
        }
    }
};