#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string UncommonChars(string A, string B)
    {
        string ans = "";
        vector<int> v(26, 0);

        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < B.size(); j++)
            {
                int c = A[i] - 'a';
                if (A[i] == B[j])
                {
                    v[c] = 1;
                }
            }
        }

        for (int i = 0; i < B.size(); i++)
        {
            int c = B[i] - 'a';
            if (v[c] == 0)
            {
                ans += B[i];
                v[c] = 1;
            }
        }

        for (int i = 0; i < A.size(); i++)
        {
            int c = A[i] - 'a';
            if (v[c] == 0)
            {
                ans += A[i];
                v[c] = 1;
            }
        }

        sort(ans.begin(), ans.end());

        // if not found any character
        if (ans.size() == 0)
        {
            return "-1";
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    string A = "geeksforgeeks";
    string B = "geeksquiz";
    cout << "Output for Example 1: " << sol.UncommonChars(A, B) << endl;

    string C = "characters";
    string D = "alphabets";
    cout << "Output for Example 2: " << sol.UncommonChars(C, D) << endl;

    return 0;
}
