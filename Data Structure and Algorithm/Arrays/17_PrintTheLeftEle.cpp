#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int leftElement(int a[], int n)
    {
        vector<int> sortedArr(a, a + n);
        sort(sortedArr.begin(), sortedArr.end());
        int ele;
        for (int i = 0; i < n; i++)
        {
            ele = sortedArr[i / 2];
        }

        return ele;
    }
};

int main()
{
    Solution sol;
    
    int a[] = {7, 8, 3, 4, 2, 9, 5};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Output: ";
    int k = sol.leftElement(a, n);
    cout << k;

    return 0;
}