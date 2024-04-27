#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool check(vector<long long> A, vector<long long> B, int N)
    {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        for (int i = 0; i < N; i++)
        {
            if (A[i] != B[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution solution;

    vector<long long> array1 = {1, 2, 5, 4, 0};
    vector<long long> array2 = {2, 4, 5, 0, 1};
    int size = array1.size();
    
    bool result = solution.check(array1, array2, size);
    if (result)
    {
        cout << "Arrays are equal." << endl;
    }
    else
    {
        cout << "Arrays are not equal." << endl;
    }
    return 0;
}