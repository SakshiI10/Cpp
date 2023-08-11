#include <iostream>
using namespace std;

bool isPalindrome(const char str[], int start, int end)
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

void Partitions(const char str[])
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (isPalindrome(str, i, j))
            {
                for (int k = i; k <= j; k++)
                {
                    cout << str[k];
                }
                cout << " ";
            }
        }
    }
}

int main()
{
    char str[] = "geek";
    Partitions(str);
    return 0;
}
