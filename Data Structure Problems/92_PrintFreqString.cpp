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
        for (int j = 0; j < length-1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

void Freq(char str[])
{
    SortStr(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        int count = 1, j = 0;
        bool Freq = false;

        for (j = 0; j<i; j++)
        {
            if (str[i] == str[j])
            {
                Freq=true;
                break;
            }
        }
        if(Freq){
            continue;
        }

        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
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