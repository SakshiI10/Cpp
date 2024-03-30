#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string modify(string s)
    {
        string vowel;
        for (char ch : s)
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel.push_back(ch);
            }
        }

        string reversed;
        for (int i = vowel.length() - 1; i >= 0; i--)
        {
            reversed.push_back(vowel[i]);
        }
        return reversed;
    }
};

int main()
{
    Solution solution;
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string result = solution.modify(input);

    cout << "Reversed vowels: " << result << endl;

    return 0;
}
