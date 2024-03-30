#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<char> strtochar(string str)
    {
        vector<char> charList;
        for (char ch : str)
        {
            charList.push_back(ch);
        }
        return charList;
    }
};

int main()
{
    Solution solution;
    string inputString;
    cout << "Enter a string: ";
    cin >> inputString;

    vector<char> result = solution.strtochar(inputString);

    cout << "Characters in the string: ";
    for (char ch : result)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}
