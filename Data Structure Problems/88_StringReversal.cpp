// Program to reverse a string.

#include <iostream>
using namespace std;

void Reverse(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = length - 1; i >= 0; i--)
    {
        cout << str[i];
    }
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    Reverse(str);
    return 0;
}