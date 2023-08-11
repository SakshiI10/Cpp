// User Input and Output in String.

#include <iostream>
//#include <string>
using namespace std;

void PrintString(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    PrintString(str);
    return 0;
}

/* string PrintString(string str)
{
    for (int i = 0; i<str.length(); i++)
    {
        cout << str[i];
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    PrintString(str);
    return 0;
} */