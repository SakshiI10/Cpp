#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution
{
public:
    int fascinating(int n)
    {
        if (n < 100 || n > 999)
        {
            return -1;
        }

        int n2 = n * 2;
        int n3 = n * 3;
        string concatenatedStr = to_string(n) + to_string(n2) + to_string(n3);

        unordered_set<char> digitSet;
        for (char digit : concatenatedStr)
        {
            if (digit == '0' || digitSet.count(digit) > 0)
            {
                return 0;
            }
            digitSet.insert(digit);
        }
        return 1;
    }
};

int main()
{
    Solution sol;

    int N1 = 192;
    if (sol.fascinating(N1))
    {
        cout << "Fascinating" << endl;
    }
    else
    {
        cout << "Not Fascinating" << endl;
    }

    int N2 = 853;
    if (sol.fascinating(N2))
    {
        cout << "Fascinating" << endl;
    }
    else
    {
        cout << "Not Fascinating" << endl;
    }

    int N3 = 384;
    if (sol.fascinating(N3))
    {
        cout << "Fascinating" << endl;
    }
    else
    {
        cout << "Not Fascinating" << endl;
    }

    return 0;
}
