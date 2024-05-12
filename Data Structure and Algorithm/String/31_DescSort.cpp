#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string ReverseSort(string str)
{
    sort(str.begin(), str.end());
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string str1 = "geeks";
    cout << "Input: " << str1 << endl;
    cout << "Output: " << ReverseSort(str1) << endl;

    string str2 = "for";
    cout << "Input: " << str2 << endl;
    cout << "Output: " << ReverseSort(str2) << endl;

    return 0;
}
