#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    long long int product(long long int a[], int n, long long int mod)
    {
        long long int product = 1;

        for (int i = 0; i < n; i++)
        {
            // Take modulo operation after each multiplication
            product = (product * a[i]) % mod;
        }

        return product;
    }
};

int main()
{
    Solution sol;

    long long int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    long long int result = sol.product(arr, n, 1); // Pass n as the size of the array
    cout << "Product: " << result << endl;
    return 0;
}
