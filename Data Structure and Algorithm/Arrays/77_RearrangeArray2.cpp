#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void rearrangeArray(int a[], int n)
    {
        sort(a, a + n);
        vector<int> result(n);
        int left = 0, right = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                result[i] = a[left++];
            }
            else
            {
                result[i] = a[right--];
            }
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = result[i];
        }
    }
};

#include <iostream>

int main()
{
    int arr1[] = {1, 9, 2, 8, 3, 7, 4, 6, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    Solution solution1;
    solution1.rearrangeArray(arr1, n1);
    cout << "Output for arr1: ";
    for (int i = 0; i < n1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
