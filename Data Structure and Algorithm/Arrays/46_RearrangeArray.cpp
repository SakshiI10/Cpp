#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    void Rearrange(int a[], int n, int answer[]) {
        // Sort the input array in ascending order
        sort(a, a + n);

        // Initialize pointers for minimum and maximum elements
        int minPtr = 0, maxPtr = n - 1;

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                answer[i] = a[minPtr++];
            } else {
                answer[i] = a[maxPtr--];
            }
        }
    }
};

int main() {
    Solution solution;

    // Example 1
    int arr1[] = {4, 5, 1, 2, 3};
    int answer1[5];
    solution.Rearrange(arr1, 5, answer1);

    cout << "Example 1: ";
    for (int i = 0; i < 5; ++i) {
        cout << answer1[i] << " ";
    }
    cout << endl;

    // Example 2
    int arr2[] = {1, 2, 3, 4};
    int answer2[4];
    solution.Rearrange(arr2, 4, answer2);

    cout << "Example 2: ";
    for (int i = 0; i < 4; ++i) {
        cout << answer2[i] << " ";
    }
    cout << endl;

    return 0;
}
