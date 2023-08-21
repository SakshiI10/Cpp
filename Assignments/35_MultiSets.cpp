#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}

int main(){
    multiset<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("ijk");
    s.insert("abc");

    // Deletes the value at a particular iterator
    /* auto it=s.find("abc");
    if(it != s.end()){
        s.erase(it);
    } */

    //Deletes all values
    s.erase("abc");
    print(s);
}