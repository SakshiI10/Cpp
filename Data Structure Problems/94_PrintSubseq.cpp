// Print all subsequences of a string.
//** perform again.

#include <iostream>
using namespace std;

void PrintSubseq(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < (1 << length); i++)
    {
        for (int j = 0; j < length; j++)
        {
            if (i & (1 << j))
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
}

int main()
{
    char str[] = "abcd";
    PrintSubseq(str);
    return 0;
}