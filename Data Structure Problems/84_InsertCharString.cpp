//How to insert characters in a string at a certain position.

#include <iostream>
using namespace std;

void InsertChar(char str[], char ch, int index)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i == index)
        {
            str[i] = ch;
        }
    }
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    char ch = '*';
    int index = 2;
    InsertChar(str, ch, index);
    cout << str;
    return 0;
}