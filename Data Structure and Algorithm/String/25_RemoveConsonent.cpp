#include <iostream>
using namespace std;

class Solution
{
public:
    string removeConsonants(string s)
    {
        string str;
        for (char ch : s)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                str.push_back(ch);
            }
        }
        if (str.empty())
        {
            return "No Vowel";
        }
        return str;
    }
};

int main()
{
    Solution sol;
    cout << sol.removeConsonants("abEkipo") << endl; // Output: aEio
    cout << sol.removeConsonants("rrty") << endl;    // Output: No Vowel
    return 0;
}
