#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    int countNumbers(int n)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            string numStr = to_string(i);
            bool valid = true;
            for (char digit : numStr)
            {
                if (digit < '1' || digit > '5')
                {
                    valid = false;
                    break;
                }
            }
            if (valid)
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
    int N1 = 20;
    int N2 = 100;
    cout << "Count for N = 20: " << sol.countNumbers(N1) << endl;
    cout << "Count for N = 100: " << sol.countNumbers(N2) << endl;
    return 0;
}
