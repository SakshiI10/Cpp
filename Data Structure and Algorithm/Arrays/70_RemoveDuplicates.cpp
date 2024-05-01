#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> removeDuplicate(int A[], int N)
    {
        unordered_set<int> seen;
        vector<int> result;

        for (int i = 0; i < N; i++)
        {
            if (seen.find(A[i]) == seen.end())
            {
                seen.insert(A[i]);
                result.push_back(A[i]);
            }
        }

        return result;
    }
};

int main()
{
    Solution solution;
   
    int A1[] = {1, 2, 3, 1, 4, 2};
    int N1 = sizeof(A1) / sizeof(A1[0]);
    vector<int> result1 = solution.removeDuplicate(A1, N1);
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
