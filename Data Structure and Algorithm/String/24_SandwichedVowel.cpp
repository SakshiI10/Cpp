#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string Sandwiched_Vowel(string s)
    {
        string result = "";
        int n = s.length();

        for (int i = 0; i < n; ++i)
        {
            // Check if the current character is a consonant
            if (!isVowel(s[i]))
            {
                result += s[i]; // Add consonant to result
            }
            else
            {
                // If current character is a vowel, check if it's sandwiched between two consonants
                if (i > 0 && i < n - 1 && !isVowel(s[i - 1]) && !isVowel(s[i + 1]))
                {
                }
                else
                {
                    result += s[i];
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;

    // Example usage
    string input1 = "bab";
    string input2 = "ceghij";
    string input3 = "oqlt";

    cout << sol.Sandwiched_Vowel(input1) << endl; // Output: bb
    cout << sol.Sandwiched_Vowel(input2) << endl; // Output: cghj
    cout << sol.Sandwiched_Vowel(input3) << endl; // Output: oqlt

    return 0;
}
