#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution
{
public:
    int getCount(string S, int N)
    {
        int count = 0;
        map<char, int> mp;

        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != S[i + 1])
            {
                mp[S[i]]++;
            }
        }

        for (auto it : mp)
        {
            if (it.second == N)
            {
                count++;
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;

    string S1 = "abc";
    int N1 = 1;
    int result1 = sol.getCount(S1, N1);
    cout << "Output: " << result1 << endl;

    string S2 = "geeksforgeeks";
    int N2 = 2;
    int result2 = sol.getCount(S2, N2);
    cout << "Output: " << result2 << endl;

    return 0;
}
