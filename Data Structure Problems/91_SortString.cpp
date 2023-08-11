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
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    SortStr(str);
    cout << str;
    return 0;
}
