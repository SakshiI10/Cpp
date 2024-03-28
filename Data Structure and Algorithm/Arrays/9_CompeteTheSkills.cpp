#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void scores(long long a[], long long b[], int ca, int cb)
    {
        vector<long long> A(a, a + ca);
        vector<long long> B(b, b + cb);

        int scoreA = 0, scoreB = 0;

        // Check if the size of A and B is the same
        if (A.size() != B.size())
        {
            cerr << "Error: Arrays A and B must have the same size." << endl;
            return; 
        }

        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] > B[i])
            {
                scoreA++;
            }
            else if (A[i] < B[i])
            {
                scoreB++;
            }
        }

        cout << scoreA << " " << scoreB << endl;
    }
};

int main()
{
    Solution solution;
    long long A[] = {4, 2, 7};
    long long B[] = {5, 6, 3};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);
    solution.scores(A, B, sizeA, sizeB);

    return 0;
}
