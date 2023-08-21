/* Given n strings and Q queries. In each query you are given a string. Print yes if string is present else print no.
N <= 10^6
|S| <= 100
Q <+ 10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cout << "Enter number of string: ";
    cin >> n;
    cout << "Enter string: ";
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cout << "Enter number of string to be searched: ";
    cin >> q;
    while (q--)
    {
        string str;
        cout << "Enter string to be search: ";
        cin >> str;
        if (s.find(str) == s.end())
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}