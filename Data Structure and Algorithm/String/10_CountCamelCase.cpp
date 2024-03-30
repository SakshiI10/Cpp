#include <iostream>
#include <string>
using namespace std;

class Solution {
public:   
    int countCamelCase(string s) {
        int count = 0;
        for (char ch : s) {
            if (isupper(ch)) { // Check if character is uppercase
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    string s1 = "ckjkUUYII";
    cout << "Test case 1 output: " << solution.countCamelCase(s1) << endl; // Output should be 5
    
    // Test case 2
    string s2 = "abcd";
    cout << "Test case 2 output: " << solution.countCamelCase(s2) << endl; // Output should be 0
    
    return 0;
}
