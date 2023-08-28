#include <bits/stdc++.h>
using namespace std;

// A function to print a vector:
void Print(vector<int> v)
{
    cout << "Size of a vector: " << v.size() << endl;
    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // vector declaration:
    // vector<int> v;

    // How to input a vector
    /* cout << "Enter number of elements: ";
    int n;
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    Print(v); */
    
    // Another way to declare a vector:
    /* vector<int> v(10);
    Print(v); */

    vector<int> v(10, 3);
    Print(v);

    /* vector<int> v(10, 3);
    v.push_back(7);
    v.push_back(6);
    Print(v);
    v.pop_back();
    Print(v); */

    // To copy a vector:
    /* vector<int> v;
    v.push_back(7);
    v.push_back(6);
    //vector<int> v2=v;
    vector<int> &v2=v;  //Reference
    v2.push_back(5);
    Print(v);
    Print(v2); */

    /* vector<string> v;
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    Print(v);
    return 0; */
}