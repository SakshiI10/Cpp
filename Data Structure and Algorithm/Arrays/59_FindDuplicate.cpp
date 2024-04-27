#include <iostream>
using namespace std;

class Solution
{
public:
    int findDuplicate(int A[])
    {
        if (A[3] == A[4])
            return A[3];

        if (A[4] == A[5])
            return A[4];

        return A[5];
    }
};

int main()
{
    Solution solution;

    int A[] = {1, 2, 3, 3, 3, 3, 3, 5, 9, 10};
    int duplicate = solution.findDuplicate(A);
    cout << "Duplicate number: " << duplicate << endl;

    return 0;
}
