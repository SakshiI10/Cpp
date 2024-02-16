#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Reverse a specific range (from index 1 to 3)
    std::reverse(myVector.begin() + 1, myVector.begin() + 4);

    // Print the modified vector
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
