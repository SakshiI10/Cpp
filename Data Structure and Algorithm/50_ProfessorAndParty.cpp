#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution
{
public:
    string PartyType(long long int a[], int n)
    {
        unordered_set<long long int> colors;
        for (int i = 0; i < n; ++i)
        {
            if (colors.find(a[i]) != colors.end())
            {
                return "BOYS";
            }
            colors.insert(a[i]);
        }
        return "GIRLS";
    }
};

int main()
{
    int n = 5;
    long long a[] = {1, 2, 3, 4, 7};
    Solution obj;
    string result = obj.PartyType(a, n);
    cout << "The party is for: " << result << endl;
    return 0;
}
