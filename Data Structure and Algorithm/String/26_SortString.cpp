#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string sortString(string s)
    {
        sort(s.begin(), s.end());
        return s;
    }
};

int main()
{
    Solution sol;

    cout << sol.sortString("edcab") << endl; 
    cout << sol.sortString("xzy") << endl;   
    
    return 0;
}
