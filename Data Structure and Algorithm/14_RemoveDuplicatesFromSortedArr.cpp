#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    /* std::unique is an algorithm in the C++ Standard Template Library (STL) that eliminates consecutive duplicates in a range. nums.begin() and nums end() specify the range for the std::unique algorithm to operate on, which is the entire vector. std::unique rearranges the elements in the range such that all unique elements appear at the beginning, and it returns an iterator pointing to the end of the unique elements. */
    auto it = unique(nums.begin(), nums.end());
    
    /* it is the iterator returned by std::unique, pointing to the end of the unique elements in the vector. erase is a vector method that removes elements in the specified range. This line effectively removes all elements from the iterator it to the end of the vector, leaving only the unique elements at the beginning. */
    nums.erase(it, nums.end());

    /* Returns the size of the modified vector after removing duplicates. This represents the number of unique elements in the vector. */
    return nums.size();
}

int main() {
    vector<int> nums = {1, 1, 2};
    int k = removeDuplicates(nums);
    cout << "Output: " << k << ", nums = [";
    for (int i = 0; i < k; ++i) {
        cout << nums[i];
        if (i < k - 1) {
            cout << ",";
        }
    }
    cout << ", _]" << endl;
    return 0;
}
