#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x)
    {
        vector<int> result{-1}; // Initialize result with -1 for cases where x is not found
        int firstIndex = -1;

        // Finding the first occurrence of x
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                firstIndex = i;
                break;
            }
        }

        // If x is not found, return result with a single element as -1
        if (firstIndex == -1)
            return result;

        // Finding the last occurrence of x
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == x)
            {
                result.pop_back();            // Remove the initial -1
                result.push_back(firstIndex); // Add first occurrence index
                result.push_back(i);          // Add last occurrence index
                break;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;

    vector<int> arr = {1, 3, 3, 4};
    int n = arr.size();
    int x = 3;

    vector<int> indices = sol.firstAndLast(arr, n, x);
    cout << "Indices of first and last occurrences of " << x << " are: ";
    for (int i : indices)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
