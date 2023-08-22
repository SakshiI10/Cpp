#include <bits/stdc++.h>
using namespace std;

/* bool is_positive(int x)
{
    return x > 0;
} */

int main()
{
    // lambda function
    auto sum = [](int x, int y)
    { return x + y; };
    // cout << "Sum: " << sum(4, 7);

    vector<int> v = {-2, -4, -6};
    // allof
    cout << all_of(v.begin(), v.end(), [](int x){ return x > 0; }) << endl;
    //cout << all_of(v.begin(), v.end(), is_positive) << endl;

    //anyof
    cout << any_of(v.begin(), v.end(), [](int x){ return x > 0; }) << endl;

    //noneof
    cout << none_of(v.begin(), v.end(), [](int x){ return x > 0; }) << endl;

}