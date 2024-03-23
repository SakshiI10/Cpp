#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool check(string s) {
        int n = s.size();
        
        if (n == 0 || n == 1) {
            return true;
        }
        
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (solution.check(input)) {
        cout << "All characters in the string are same." << endl;
    } else {
        cout << "String contains different characters." << endl;
    }

    return 0;
}
