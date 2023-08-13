// Sort string of characters.

#include <iostream>
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

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    SortStr(str);
    cout << str;
    return 0;
}
