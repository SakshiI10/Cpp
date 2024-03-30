#include <iostream>
#include <string>
using namespace std;

string transform(string s)
{
    // Iterate through each character in the string
    for (int i = 0; i < s.length(); ++i)
    {
        // If the current character is a lowercase letter and it's the first character of a word
        if ((i == 0 || s[i - 1] == ' ') && islower(s[i]))
        {
            // Convert it to uppercase
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

int main()
{
    string str = "i love programming";
    string result = transform(str);
    cout << result << endl; // Output: "I Love Programming"
    return 0;
}
