#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool isIsogram(string s)
    {
        unordered_set<char> seen;
        for (char c : s)
        {
            // If the character is already present in the set, it's not an isogram.
            if (seen.find(c) != seen.end())
            {
                return false;
            }
            // Add the character to the set.
            seen.insert(c);
        }
        // If no repeated characters were found, it's an isogram.
        return true;
    }
};

int main()
{
    Solution sol;

    // Example 1
    string s1 = "machine";
    cout << "Example 1: machine\nIs Isogram? " << (sol.isIsogram(s1) ? "Yes" : "No") << endl;

    // Example 2
    string s2 = "geeks";
    cout << "Example 2: geeks\nIs Isogram? " << (sol.isIsogram(s2) ? "Yes" : "No") << endl;

    return 0;
}
