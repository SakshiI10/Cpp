#include <vector>
#include <iostream>

std::vector<int> valueEqualToIndex(int arr[], int n) {
    std::vector<int> result;

    for (int i = 0; i < n; i++) {
        if (i + 1 == arr[i]) {
            result.push_back(i + 1); // 1-based indexing
        }
    }

    return result;
}

int main() {
    int N = 5;
    int Arr[] = {15, 2, 45, 12, 7};

    std::vector<int> result = valueEqualToIndex(Arr, N);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}
