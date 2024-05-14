#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int chocolates(int n, vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        return arr[0]; 
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {5, 3, 1, 6, 9}; 
    int result = sol.chocolates(arr.size(), arr); 
    cout << result;

    return 0;
}
