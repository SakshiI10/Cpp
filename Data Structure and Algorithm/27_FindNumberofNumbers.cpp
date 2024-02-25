#include <iostream>
#include <vector>
#include <algorithm>
#include <string> 

int num(int a[], int n, int k) {
    int totalCount = 0;

    for (int num : std::vector<int>(a, a + n)) {
        std::string numStr = std::to_string(num);
        totalCount += std::count(numStr.begin(), numStr.end(), '0' + k);
    }

    return totalCount;
}

int main() {
    int A[] = {11, 12, 13, 14, 15};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 1;

    int result = num(A, n, k);

    std::cout << "Output: " << result << std::endl;

    return 0;
}
