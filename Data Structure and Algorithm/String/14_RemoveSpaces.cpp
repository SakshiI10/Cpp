#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string modify(string s)
    {
        string result;
        for (char c : s)
        {
            if (c != ' ')
            {
                result += c;
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;

    // Test cases
    string input1 = "geeks  for geeks";
    string output1 = solution.modify(input1);
    cout << "Modified string 1: " << output1 << endl;

    string input2 = "    g f g";
    string output2 = solution.modify(input2);
    cout << "Modified string 2: " << output2 << endl;

    return 0;
}
