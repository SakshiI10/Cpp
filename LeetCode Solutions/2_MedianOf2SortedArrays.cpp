#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        multiset<int> s;
        for (int i = 0; i < nums1.size(); ++i)
        {
            s.insert(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); ++i)
        {
            s.insert(nums2[i]);
        }
        int TotalSize = s.size();

        // auto mid declares an iterator(pointer) named mid that points to the beginning of the multiset s. 
        auto mid = s.begin();

        // advance is a function that moves an iterator a specified number of steps forward or backward.
        advance(mid, TotalSize / 2); 

        if (TotalSize % 2 == 0)
        {
            //Here, auto prevMid = mid; and prevMid--; are working with iterators, not indexes or values at those indexes.
            auto prevMid = mid;
            prevMid--;
            return static_cast<double>(*mid + *prevMid) / 2.0;
        }
        else
        {
            return static_cast<double>(*mid);
        }
    }
};
int main()
{
    Solution solution;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    double result = solution.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << result << endl;
    return 0;
}