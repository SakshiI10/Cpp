#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool IsPerfect(int a[], int n)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int a[] = {1, 2, 3, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    Solution sol;
    bool result = sol.IsPerfect(a, n);

    if (result == 1)
    {
        cout << "It is a perfect Array" << endl;
    }
    else
    {
        cout << "It is not a perfect Array" << endl;
    }
}