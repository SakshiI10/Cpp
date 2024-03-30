#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string delAlternate(string s) {
        string result;
        for (int i = 0; i < s.length(); i = i + 2) {
            result.push_back(s[i]);
        }
        return result;
    }
};

int main() {
    Solution sol;

    // Example 1
    string input1 = "Hello World";
    string output1 = sol.delAlternate(input1);
    cout << "Input: " << input1 << endl;
    cout << "Output: " << output1 << endl;

    // Example 2
    string input2 = "abcdef";
    string output2 = sol.delAlternate(input2);
    cout << "Input: " << input2 << endl;
    cout << "Output: " << output2 << endl;

    return 0;
}
