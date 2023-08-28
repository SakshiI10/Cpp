// Program to check palindrome in a string.

#include <iostream>
using namespace std;

void Palindrome(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    bool Check = false;
    for (int i = 0; i < length; i++)
    {
        int start = 0;
        int end = length - 1;
        if (str[start] == str[end])
        {
            start++;
            end--;
            Check = true;
        }
    }
    if (Check)
    {
        cout << str << " is a palindrome";
    }
    else
    {
        cout << str << " is not a palindrome";
    }
}
int main()
{
    char str[] = "malayalam";
    Palindrome(str);
    return 0;
}