#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long SoldierRequired(long long a[], long long n)
    {
        if (n <= 2)
        {
            return 0;
        }
        
        sort(a, a + n);

        int strongest = 0, weakest = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[0] == a[i])
            {
                weakest++;
            }
            if (a[n - 1] == a[i])
            {
                strongest++;
            }
        }

        if (strongest == n || weakest == n)
        {
            return 0;
        }

        return (n - strongest - weakest);
    }
};

int main()
{
    Solution sol;
    
    long long a1[] = {1, 5};
    long long n1 = sizeof(a1) / sizeof(a1[0]);
    cout << "Soldiers required for a1: " << sol.SoldierRequired(a1, n1) << endl;

    long long a4[] = {1, 1, 2, 2, 3, 3};
    long long n4 = sizeof(a4) / sizeof(a4[0]);
    cout << "Soldiers required for a4: " << sol.SoldierRequired(a4, n4) << endl;

    return 0;
}
