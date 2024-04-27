#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string is_palindrome(int n)
    {
        string numString = to_string(n);
        string reversedString = numString;
        reverse(reversedString.begin(), reversedString.end());
        if (numString == reversedString)
        {
            return "Yes";
        }
        else
        {
            return "No";
        }
    }
};

int main()
{
    Solution solution;

    int n;
    cout << "Enter an integer: ";
    cin >> n;

    string result = solution.is_palindrome(n);
    cout << "Is it a palindrome? " << result << endl;

    return 0;
}
