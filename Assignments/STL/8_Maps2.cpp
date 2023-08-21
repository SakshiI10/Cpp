#include <bits/stdc++.h>
using namespace std;

void print(map<string, string> &m)
{

    cout << "Size of map: " << m.size() << endl;
    for (auto &pr : m) // O(log(n))
    {
        cout << pr.first << " " << pr.second << " " << endl;
    }
}
int main()
{
    map<string, string> m;
    m["abcd"] = "abcd";
    auto it = m.find(7);
    if (it != m.end())
        m.erase(it);
    print(m);
}