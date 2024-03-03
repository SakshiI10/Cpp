#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k) {
        for (int i = 0; i < n; i += k) {
            int left = i;
            int right = min(i + k - 1, n - 1);

            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
};

int main() {
    Solution solution;

    // Example
    vector<long long> arr = {35, 56, 48, 21, 87};
    int n = 5, k = 2;

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    solution.reverseInGroups(arr, n, k);

    cout << "Array after reversing in groups of size " << k << ": ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
