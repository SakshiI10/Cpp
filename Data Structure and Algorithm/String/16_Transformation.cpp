#include <iostream>
#include <string>
using namespace std;

string convert(string s)
{
    string result;
    for (char ch : s)
    {
        if (islower(ch))
        {
            ch = 'z' - (ch - 'a');
            result.push_back(ch);
        }
        else if (isupper(ch))
        {
            ch = 'Z' - (ch - 'A');
            result.push_back(ch);
        }
    }
    return result;
}

int main()
{
    string str = "Hello";
    string result = convert(str);
    cout << result << endl; // Output: "Svool"

    str = "GfG";
    result = convert(str);
    cout << result << endl; // Output: "TuT"

    return 0;
}
