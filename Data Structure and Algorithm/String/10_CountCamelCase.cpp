#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int countCamelCase(string s)
    {
        int count = 0;
        for (char ch : s)
        {
            if (isupper(ch))
            { 
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution solution;

    string s1 = "ckjkUUYII";
    cout << "Output: " << solution.countCamelCase(s1) << endl; // Output should be 5

    string s2 = "abcd";
    cout << "Output: " << solution.countCamelCase(s2) << endl; // Output should be 0

    return 0;
}
