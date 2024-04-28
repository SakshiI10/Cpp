#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void immediateSmaller(vector<int> &arr, int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                arr[i] = arr[i + 1];
            }
            else
            {
                arr[i] = -1;
            }
        }
        arr[n - 1] = -1; // Last element always has no right adjacent element
    }
};

int main()
{
    Solution sol;

    vector<int> arr1 = {4, 2, 1, 5, 3};
    int n1 = arr1.size();
    cout << "Example 1:\n";
    cout << "Input: ";
    for (int num : arr1)
    {
        cout << num << " ";
    }
    cout << endl;
    sol.immediateSmaller(arr1, n1);
    cout << "Output: ";
    for (int num : arr1)
    {
        cout << num << " ";
    }
    cout << endl
         << endl;

    vector<int> arr2 = {5, 6, 2, 3, 1, 7};
    int n2 = arr2.size();
    cout << "Example 2:\n";
    cout << "Input: ";
    for (int num : arr2)
    {
        cout << num << " ";
    }
    cout << endl;
    sol.immediateSmaller(arr2, n2);
    cout << "Output: ";
    for (int num : arr2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
