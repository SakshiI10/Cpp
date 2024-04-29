#include <iostream>
#include <algorithm>
using namespace std;

class Solution
{
public:
    long long find_multiplication(int a[], int b[], int n, int m)
    {
        sort(a, a + n);
        sort(b, b + m);
        long long product = a[n - 1] * b[0];
        return product;
    }
};

int main()
{
    Solution obj;

    int a[] = {5, 7, 9, 3, 6, 2};
    int b[] = {1, 2, 6, -1, 0, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    long long result = obj.find_multiplication(a, b, n, m);
    cout << "Maximum product of a and b: " << result << endl;

    return 0;
}
