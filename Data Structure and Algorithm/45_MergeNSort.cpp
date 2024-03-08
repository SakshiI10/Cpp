#include <iostream>
#include <algorithm>

class Solution {
public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[]) {
        // Merge arrays a and b
        std::merge(a, a + n, b, b + m, answer);

        // Sort the merged array in ascending order
        std::sort(answer, answer + n + m);

        // Remove duplicates from the merged array
        int newSize = std::unique(answer, answer + n + m) - answer;

        return newSize;
    }
};

int main() {
    Solution obj;

    // Example 1
    int a1[] = {1, 8};
    int b1[] = {10, 11};
    int answer1[4];
    int newSize1 = obj.mergeNsort(a1, b1, 2, 2, answer1);

    std::cout << "Example 1 Output: ";
    for (int i = 0; i < newSize1; ++i) {
        std::cout << answer1[i] << " ";
    }
    std::cout << std::endl;

    // Example 2
    int a2[] = {7, 1, 5, 3, 9};
    int b2[] = {8, 4, 3, 5, 2, 6};
    int answer2[9];
    int newSize2 = obj.mergeNsort(a2, b2, 5, 6, answer2);

    std::cout << "Example 2 Output: ";
    for (int i = 0; i < newSize2; ++i) {
        std::cout << answer2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
