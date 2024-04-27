#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string reciprocalString(string s)
    {
        string result;
        for (char ch : s)
        {
            if (islower(ch))
            {
                ch = 'z' - (ch - 'a');
                result.push_back(ch);
            }
            else if (isupper(ch))
            {
                ch = 'Z' - (ch - 'A');
                result.push_back(ch);
            }
            else
            {
                // Retain non-alphabetic characters
                result.push_back(ch);
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;
    
    string S = "ab C";
    string output = sol.reciprocalString(S);
    cout << output << endl; // Output: "zy X"

    S = "Ish";
    output = sol.reciprocalString(S);
    cout << output << endl; // Output: "Rhs"

    return 0;
}
