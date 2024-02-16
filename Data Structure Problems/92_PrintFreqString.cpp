//Print frequency of characters in a string.

#include <iostream>
#include <string>
using namespace std;

void SortStr(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
}

void Freq(char str[])
{
    SortStr(str);
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        int count = 1, j = 0;
        bool Freq = false;
        for (j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                Freq = true;
                break;
            }
        }
        if (Freq)
        {
            continue;
        }

        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        cout << str[i] << " occurs " << count << " times" << endl;
    }
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    Freq(str);
    return 0;
}