#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int findSum(int arr[], int n)
    {
        unordered_set<int> unique;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (unique.find(arr[i]) == unique.end())
            {
                unique.insert(arr[i]);
                sum += arr[i];
            }
        }

        return sum;
    }
};

int main()
{
    Solution solution;

    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Sum of distinct elements in example 1: " << solution.findSum(arr1, n1) << endl;

    int arr2[] = {5, 5, 5, 5, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Sum of distinct elements in example 2: " << solution.findSum(arr2, n2) << endl;

    return 0;
}
