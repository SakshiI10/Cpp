#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        maxWater = max(maxWater, h * w);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(height1) << endl;  // Output: 49

    vector<int> height2 = {1, 1};
    cout << maxArea(height2) << endl;  // Output: 1

    return 0;
}
