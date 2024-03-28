#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(int n, int k, vector<int> &arr)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == k)
            {
                return i + 1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {9, 7, 2, 16, 4};
    int n = arr.size(), k = 16;

    int result = sol.search(n, k, arr);
    if(result==1){
        cout << result << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}