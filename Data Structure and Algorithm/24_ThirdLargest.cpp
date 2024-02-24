#include <vector>
#include <algorithm>
long long findMaxProduct(int A[], int n, int k)
{
    long long product = 1;

    long long maxProduct = product;
    for (int i = k; i < n; i++) {
        product = product * A[i];
    }

    return product;
}