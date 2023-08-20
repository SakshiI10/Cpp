#include <bits/stdc++.h>
using namespace std;

// A function to print a vector:
// void Print(vector<pair<int, int>> &v)
void Print(vector<int> &v)
{
    cout << "Size of a vector: " << v.size() << endl;
    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i].first << " " << v[i].second << " ";
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector of pairs
    /* vector<pair<int, int>> v = {{1, 2}, {2, 3}, {4, 5}};
    ;
    Print(v); */

    /* vector<pair<int, int>> v;
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    cout << "Enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    Print(v); */

    // Vectors of Array:
    /* int N;
    cout << "Enter number of array in vector: ";
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        // Size of inner array
        cout << "Enter size of inner array: ";
        int n;
        cin >> n;
        cout << "Enter element: ";
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            // v=Vector array, v[i]=1 vector
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        Print(v[i]);
    } */

    // Vectors of vector
    int N;
    cout << "Enter size of outer Vector: ";
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter size of inner vector: ";
        int n;
        cin >> n;
        //vector<int> temp;
        v.push_back(vector<int> ());
        cout << "Enter element: ";
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            //temp.push_back(x);
            v[i].push_back(x);
        }
        //v.push_back(temp);
    }
    v[0].push_back(10);
    //v.push_back(vector<int>());
    for (int i = 0; i < v.size(); i++)
    {
        Print(v[i]);
    }
}