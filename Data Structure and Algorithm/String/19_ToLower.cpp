#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    string toLower(string s)
    {
        string result;
        for (char ch : s)
        {
            result += tolower(ch);
        }
        return result;
    }
};

int main()
{
    Solution sol; // Creating an instance of the Solution class

    // Example 1
    string str1 = "Geeks";
    cout << "Input: " << str1 << endl;
    string result1 = sol.toLower(str1); // Calling the member function on the instance
    cout << "Output: " << result1 << endl;

    return 0;
}
