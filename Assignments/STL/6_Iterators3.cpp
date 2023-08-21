// auto
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};

    auto a = 1.0;
    cout << a << endl;
    
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << " " << endl;
    }
    return 0;
}