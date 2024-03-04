#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int getCommon(int stack1[], int stack2[]) {
        unordered_set<int> set1(stack1, stack1 + 10);
        unordered_set<int> set2(stack2, stack2 + 10);
        std::vector<int> commonPizzas;
        for (int i = 0; i < 10; ++i) {
            if (set2.find(stack1[i]) != set2.end()) {
                commonPizzas.push_back(stack1[i]);
            }
        }
        return commonPizzas.size();
    }
};

int main() {
    // Example 1
    int stack1_1[] = {891, 424, 945, 741, 897, 514, 692, 221, 678, 168};
    int stack2_1[] = {702, 952, 221, 614, 69, 753, 821, 971, 318, 364};
    Solution sol1;
    int result1 = sol1.getCommon(stack1_1, stack2_1);
    std::cout << "Example 1: " << result1 << std::endl;
    return 0;
}
