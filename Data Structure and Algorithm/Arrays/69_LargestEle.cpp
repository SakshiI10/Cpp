#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largest(vector<int> &arr, int n) {
        vector<int> sortedArr(arr.begin(), arr.end());
        sort(sortedArr.begin(), sortedArr.end());
        return sortedArr[n - 1];
    }
};

int main() {
    // Example 1
    vector<int> A1 = {1, 8, 7, 56, 90};
    int n1 = 5;
    Solution sol;
    cout << "Output: " << sol.largest(A1, n1) << endl;

    // Example 2
    vector<int> A2 = {1, 2, 0, 3, 2, 4, 5};
    int n2 = 7;
    cout << "Output: " << sol.largest(A2, n2) << endl;

    return 0;
}
