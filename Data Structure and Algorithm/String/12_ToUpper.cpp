#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string to_upper(string str)
{
    string result;
    for (char ch : str)
    {
        result += toupper(ch);
    }
    return result;
}

int main()
{
    string str1 = "geeks";
    cout << "Input: " << str1 << endl;
    string result1 = to_upper(str1);
    cout << "Output: " << result1 << endl;

    return 0;
}
