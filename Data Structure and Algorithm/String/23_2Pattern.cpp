#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string triDownwards(string s) {
        string result;
        for (int i = 0; i < s.length(); i++) {
            string pattern_line;
            // Add dots for the left side of the triangle
            for (int j = 0; j < i; j++) {
                pattern_line += ".";
            }
            // Add characters from the input string
            for (int j = i; j < s.length(); j++) {
                pattern_line += s[j];
            }
            result += pattern_line + "\n"; // Add newline character after each line
        }
        return result;
    }
};

int main() {
    Solution solution;
    string input = "GeeK";
    string result = solution.triDownwards(input);

    cout << "Input: " << input << endl;
    cout << "Output:" << endl;
    cout << result;

    return 0;
}
