#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string solve(string a)
{
    string result;

    for (char ch : a)
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
        {
            result.push_back(ch);
        }
    }

    int count = unordered_set<char>(result.begin(), result.end()).size(); // Counting distinct consonants

    if (count % 2 == 0)
    {
        return "SHE!";
    }
    else
    {
        return "HE!";
    }
}

int main()
{
    string a1 = "jpmztf";
    cout << "Input: " << a1 << endl;
    cout << "Output: " << solve(a1) << endl;
    
    string a2 = "plkaitw";
    cout << "Input: " << a2 << endl;
    cout << "Output: " << solve(a2) << endl;

    return 0;
}
