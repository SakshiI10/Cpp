#include <iostream>
#include <string>
using namespace std;

void Char(char str[], char ch)
{
    int i = 0;
    bool present = false;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            present = true;
            break;
        }
    }
    if (present)
    {
        cout << ch << " is present at index " << i;
    }
    else
    {
        cout << ch << " not found";
    }
}

void SubString(char str[], char substr[])
{
    int StrLen = 0, i = 0;
    while (str[i] != '\0')
    {
        StrLen++;
        i++;
    }

    int SubStrLen = 0, j = 0;
    while (substr[j] != '\0')
    {
        SubStrLen++;
        j++;
    }

    bool Found = false;
    for (i = 0; i <= StrLen - SubStrLen; i++)
    {
        for (j = 0; j < SubStrLen; j++)
        {
            if (str[i + j] != substr[j])
            {
                break;
            }
        }
        if (j == SubStrLen)
        {
            Found = true;
            break;
        }
    }
    if (Found)
    {
        cout << "Substring \"" << substr << "\" found at index: " << i << endl;
    }
    else
    {
        cout << "Substring \"" << substr << "\" not found." << endl;
    }
}

int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    /* char ch = 'i';
    Char(str, ch); */
    char substr[] = "shi";
    SubString(str, substr);
    return 0;
}