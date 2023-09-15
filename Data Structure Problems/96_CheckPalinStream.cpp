// Online algorithm for checking palindrome in a stream

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            return false;
        start++;
        end--;
    }
    return true;
}

void checkPalindromeStream(char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= length - i; j++)
        {
            for (int k = i; k < i + j; k++)
            {
                cout << str[k];
            }
            int start = i;
            int end = i + j - 1;

            if (isPalindrome(str, start, end))
            {
                cout << " Yes";
            }
            else
            {
                cout << " No";
            }
            cout << endl;
        }
    }
}

int main()
{
    char str[] = "aabaacaabaa";
    checkPalindromeStream(str);
    return 0;
}