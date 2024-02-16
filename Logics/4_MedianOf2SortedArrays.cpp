class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        multiset <int> s;
        for(int i=0; i<nums1.size(); i++)  {
            s.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++)  {
            s.insert(nums2[i]);
        }

        int totalSize = s.size();
        multiset<int>::iterator mid = next(s.begin(), totalSize / 2);
        
        if (totalSize % 2 == 0) {
            multiset<int>::iterator prevMid = prev(mid);
            return static_cast<double>(*mid + *prevMid) / 2.0;
        } 
        else {
            return static_cast<double>(*mid);
        }
    }
};