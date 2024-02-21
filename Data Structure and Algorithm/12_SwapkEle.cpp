#include <vector>

class Solution {
public:
    void swapKth(int n, int k, std::vector<int> &arr) {
        int k1 = k - 1;  // Adjusting for 0-based indexing
        int k2 = n - k;

        // Swap the kth element from the beginning with the kth element from the end
        int temp = arr[k1];
        arr[k1] = arr[k2];
        arr[k2] = temp;
    }
};
