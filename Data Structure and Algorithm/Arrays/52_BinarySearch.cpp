#include <iostream>
using namespace std;

class Solution {
public:
    int binarysearch(int arr[], int n, int k) {
        int left = 0;
        int right = n - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            // If the element is present at the middle itself
            if (arr[mid] == k)
                return mid;
            
            // If element is smaller than mid, then it can only be present in left subarray
            if (arr[mid] > k)
                right = mid - 1;
            
            // Else the element can only be present in right subarray
            else
                left = mid + 1;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int arr[] = {2, 4, 7, 9, 16}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 16;

    int result = sol.binarysearch(arr, n, k);
    if (result != -1) {
        std::cout << "Element " << k << " found at position " << result << std::endl;
    } else {
        std::cout << "Element " << k << " not found in the array" << std::endl;
    }

    return 0;
}
