#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPerfect(const vector<int>& arr) {
    int n = arr.size();
    
    // Check for strictly increasing part
    int i = 1;
    while (i < n && arr[i] > arr[i - 1])
        i++;

    // Check for constant part
    while (i < n && arr[i] == arr[i - 1])
        i++;

    // Check for strictly decreasing part
    while (i < n && arr[i] < arr[i - 1])
        i++;

    // If 'i' reaches end of array, it's perfect
    return i == n;
}

int main() {
    vector<int> arr1 = {1, 8, 8, 8, 3, 2};
    vector<int> arr2 = {1, 1, 2, 2, 1};

    cout << "Is arr1 perfect? " << (isPerfect(arr1) ? "Yes" : "No") << endl;
    cout << "Is arr2 perfect? " << (isPerfect(arr2) ? "Yes" : "No") << endl;

    return 0;
}
