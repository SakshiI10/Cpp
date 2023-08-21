#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pair is a collection of 2 data types
    pair<int, string> p;

    // How to initialise a pair (first way):
    /* p = make_pair(2, "abc");
    cout << p.first
    << " " << p.second << endl; */

    // How to initialise a pair (second way):
    p = {2, "abc"};
    /* cout << p.first
    << " " << p.second << endl; */

    // How to copy a pair
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << " " << p.second << endl;

    // Arrays
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    cout << "Elements are: " << endl;
    for(int i=0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
    cout << endl;

    //Swap Array elements:
    cout << "Swapped elements are: " << endl;
    swap(p_array[0], p_array[2]);
    for(int i=0; i<3; i++){
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    //How to input value and display it:
    cin >> p.first;
    cout << p.first;
    return 0;
}