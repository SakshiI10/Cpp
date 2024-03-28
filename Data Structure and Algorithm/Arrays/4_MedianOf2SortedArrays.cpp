#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> merged;
        int i = 0, j = 0;
        int n1 = nums1.size();
        int n2 = nums2.size();

        while (i < n1 && j < n2)
        {
            if (nums1[i] < nums2[j])
            {
                merged.push_back(nums1[i]);
                i++;
            }
            else
            {
                merged.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n1)
        {
            merged.push_back(nums1[i]);
            i++;
        }

        while (j < n2)
        {
            merged.push_back(nums2[j]);
            j++;
        }

        int totalSize = merged.size();
        if (totalSize % 2 == 0)
        {
            return (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
        }
        else
        {
            return merged[totalSize / 2];
        }
    }
};

int main()
{
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};

    Solution sol;
    double median = sol.findMedianSortedArrays(nums1, nums2);

    cout << "Median of the combined sorted arrays: " << median << endl;

    return 0;
}
