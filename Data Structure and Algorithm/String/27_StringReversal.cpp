#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string reverseString(string s)
{
    string result = "";
    unordered_set<char> seen;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ' && seen.find(s[i]) == seen.end())
        {
            result += s[i];
            seen.insert(s[i]);
        }
    }

    return result;
}

int main()
{
    cout << reverseString("GEEKS FOR GEEKS") << endl; // Output: SKEGROF
    cout << reverseString("I AM AWESOME") << endl;    // Output: EMOSWAI
    return 0;
}
