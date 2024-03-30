#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<int> count(string s)
    {
        int count_lower = 0, count_upper = 0, count_special = 0, count_numeric = 0;
        for (char ch : s)
        {
            if (islower(ch))
            {
                count_lower++;
            }
            else if (isupper(ch))
            {
                count_upper++;
            }
            else if (isdigit(ch))
            {
                count_numeric++;
            }
            else
            {
                count_special++;
            }
        }
        return {count_lower, count_upper, count_numeric, count_special};
    }
};

int main()
{
    Solution solution;

    // Test case 1
    string s1 = "#GeeKs01fOr@gEEks07";
    vector<int> counts1 = solution.count(s1);
    cout << "Lowercase characters: " << counts1[0] << endl; // Output should be 8
    cout << "Uppercase characters: " << counts1[1] << endl; // Output should be 5
    cout << "Numeric characters: " << counts1[2] << endl;   // Output should be 2
    cout << "Special characters: " << counts1[3] << endl;   // Output should be 4

    return 0;
}
