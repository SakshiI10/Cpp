#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string reverseString(string s) {
    string result = "";
    unordered_set<char> seen;

    for (char c : s) {
        if (c != ' ' && seen.find(c) == seen.end()) {
            result = c + result;
            seen.insert(c);
        }
    }

    return result;
}

int main() {
    cout << reverseString("GEEKS FOR GEEKS") << endl; // Output: SKEGROF
    cout << reverseString("I AM AWESOME") << endl;    // Output: EMOSWAI
    return 0;
}
