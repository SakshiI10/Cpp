#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeVowels(string S)
    {
        string result;
        for (char ch : S)
        {
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
            {
                result.push_back(ch);
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;

    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Using getline to allow spaces in the input

    string result = solution.removeVowels(input);
    cout << "Result after removing vowels: " << result << endl;

    return 0;
}
