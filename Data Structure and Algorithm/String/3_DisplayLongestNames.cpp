#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string longest(int n, vector<string> &names)
    {
        string longestName = names[0]; // Assuming the first name is the longest initially
        for (int i = 1; i < n; ++i)
        {
            if (names[i].size() > longestName.size())
            {
                longestName = names[i];
            }
        }
        return longestName;
    }
};

int main()
{
    Solution solution;
    
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    vector<string> names(n);
    cout << "Enter " << n << " names: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> names[i];
    }

    string longestName = solution.longest(n, names);
    cout << "Longest name: " << longestName << endl;

    return 0;
}
