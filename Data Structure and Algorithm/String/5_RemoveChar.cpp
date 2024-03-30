#include <iostream>
#include <vector>
#include <string>
#include <cctype> // Include for isdigit function
using namespace std;

class Solution
{
public:
    string removeCharacters(string S)
    {
        string result;
        for (char ch : S)
        {
            if (isdigit(ch))
            {
                result.push_back(ch);
            }
        }
        return result;
    }
};

/*
class Solution {
public:
    vector<char> removeCharacters(string S)
    {
        vector<char> charList;
        for (char ch : S) {
            charList.push_back(ch);
        }

        vector<char> result;
        for (char ch : charList) {
            if (isdigit(ch)) {
                result.push_back(ch);
            }
        }
        return result;
    }
};
 */

int main()
{
    Solution solution;
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string result = solution.removeCharacters(input);

    cout << "Result after removing non-numeric characters: " << result << endl;

    return 0;
}
