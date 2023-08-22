#include <bits/stdc++.h>
using namespace std;

int main()
{
    // For arrays
    /* int n;
    cout << "Enter size of an array: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Lowerbound element: ";
    int *ptr = lower_bound(a, a + n, 8);
    if (ptr == (a + n))
    {
        cout << "Not found";
        return 0;
    }
    cout << (*ptr) << endl;

    cout << "Upperbound element: ";
    int *ptr2 = upper_bound(a, a + n, 8);
    if (ptr2 == (a + n))
    {
        cout << "Not found";
        return 0;
    }
    cout << (*ptr2) << endl; */

    // For vectors
    /* int n;
    cout << "Enter size of an array: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Lowerbound element: ";
    auto it = lower_bound(a.begin(), a.end(), 8);
    if (it == a.end())
    {
        cout << "Not found";
        return 0;
    }
    cout << (*it) << endl;

    cout << "Upperbound element: ";
    auto it2 = upper_bound(a.begin(), a.end(), 8);
    if (it2 == a.end())
    {
        cout << "Not found";
        return 0;
    }
    cout << (*it2) << endl; */

    // Maps and sets
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    set<int> s;
    cout << "Enter elements: ";
    for (int i = 0; i < (int)(1e6); i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (int i = 0; i < (int)(1e6); i++){
        auto it = s.lower_bound(rand());
    }
}