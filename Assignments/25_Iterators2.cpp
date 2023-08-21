#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    /* for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl; */

    // How to use reference i.e. &
    /* for(int &value : v){
        value++;
    }
    for(int value : v){
        cout << value << " ";
    }
    cout << endl; */

    // When pairs and reference are to be used
    /* vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << " " << endl;
    }
    return 0; */
}