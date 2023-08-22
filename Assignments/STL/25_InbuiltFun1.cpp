#include <bits/stdc++.h>
using namespace std;

int main()
{
    //For vectors
    /* int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v.begin(), v.end());
    cout << "Minimum: " << min << endl;

    int max = *max_element(v.begin(), v.end());
    cout << "Maximum: " << max << endl;

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;

    int ct = count(v.begin(), v.end(), 6);
    cout << "Count: " << ct << endl;

    auto it = find(v.begin(), v.end(), 10);
    if (it != v.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    reverse(v.begin(), v.end());
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl; */

    /* string s = "abcdefghijklmnopqrstuvwxyz";
    reverse(s.begin(), s.end());
    cout << s << endl; */

    //For arrays
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int v[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int min = *min_element(v, v+n);
    cout << "Minimum: " << min << endl;

    int max = *max_element(v, v+n);
    cout << "Maximum: " << max << endl;

    int sum = accumulate(v, v+n, 0);
    cout << "Sum: " << sum << endl;

    int ct = count(v, v+n, 2);
    cout << "Count: " << ct << endl;

    auto it = find(v, v+n, 10);
    if (it != v+n)
    {
        cout << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    reverse(v, v+n);
    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;
}