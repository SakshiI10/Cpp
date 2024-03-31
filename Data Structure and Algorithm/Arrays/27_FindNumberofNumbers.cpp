#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int num(int a[], int n, int k)
{
    int totalCount = 0;
    for (int num : vector<int>(a, a + n))
    {
        string numStr = to_string(num);
        totalCount += count(numStr.begin(), numStr.end(), '0' + k);
    }
    return totalCount;
}

int main()
{
    int A[] = {11, 12, 13, 14, 15};
    int n = sizeof(A) / sizeof(A[0]);
    int k = 1;

    int result = num(A, n, k);

    cout << "Output: " << result << endl;

    return 0;
}
