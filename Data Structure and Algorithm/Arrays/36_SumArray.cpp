#include <iostream>

void SumArray(int arr[], int n) {
    // Calculate the total sum
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    // Output the sum array
    for (int i = 0; i < n; ++i) {
        std::cout << totalSum - arr[i];
        if (i < n - 1) {
            std::cout << " ";
        }
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Sum Array: ";
    SumArray(arr, n);

    return 0;
}
