#include <bits/stdc++.h>
using namespace std;

// For vectors
/* bool swapfun(int a, int b)
{
    if (a > b) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (swapfun(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
} */

// For vector and pair
/* bool swapfun(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
    }
    else
    {
        if (a.second > b.second)
            return true;
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter no of pairs: ";
    cin >> n;
    vector<pair<int, int>> a(n);
    cout << "Enter pairs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (swapfun(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    sort(a.begin(), a.end());
    cout << "Sorted pair: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << endl;
} */

// For inbuilt comparator
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}

int main()
{
    int n;
    cout << "Enter no of pairs: ";
    cin >> n;
    vector<pair<int, int>> a(n);
    cout << "Enter pairs: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    cout << "Sorted pair: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }
    cout << endl;
}