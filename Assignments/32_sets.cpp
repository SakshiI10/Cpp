#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    // Both print loops are ok.
    /* for (string value : s)
    {
        cout << value << endl;
    } */
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
}
int main()
{
    set<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ijk");
    s.insert("abc");
    auto it = s.find("abc");
    if (it != s.end()) //Use check while using end()
    {
        //cout << (*it);
        s.erase(it);
    }
    s.erase("def");
    print(s);
}