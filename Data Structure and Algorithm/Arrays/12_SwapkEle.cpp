#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void swapKth(int n, int k, vector<int> &arr) {
        int k1 = k - 1;  // Adjusting for 0-based indexing
        int k2 = n - k;

        int temp = arr[k1];
        arr[k1] = arr[k2];
        arr[k2] = temp;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {5, 3, 6, 1, 2};
    int n = arr.size();
    int k = 2;
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    sol.swapKth(n, k, arr);

    cout << "Array after swapping kth elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}