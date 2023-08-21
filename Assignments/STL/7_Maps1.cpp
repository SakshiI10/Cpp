#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{

    cout << "Size of map: " << m.size() << endl;
    for (auto &pr : m) // O(log(n))
    {
        cout << pr.first << " " << pr.second << " " << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[2] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m[3] = "qwe";
    /* map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << " " << endl;
    } */
    // print(m);

    // To find a value in a map:
    // auto it = m.find(3);  //O(log(n))
    // auto it = m.find(7);
    /* if (it == m.end())
    {
        cout << "No value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << " " << endl;
    } */

    auto it = m.find(5);
    //auto it = m.find(7);
    if (it != m.end())
        m.erase(it); // O(log(n))
    print(m);
    return 0;
}