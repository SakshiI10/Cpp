#include <bits/stdc++.h>
using namespace std;
// sort consistes: quick sort, heap sort and insertion sort. It is the best possible algo for sorting.

int main()
{
    int n;
    cin >> n;
    // int a[n];

    // In case of vectors.
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(a, a+n);

    // In case of vectors
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}