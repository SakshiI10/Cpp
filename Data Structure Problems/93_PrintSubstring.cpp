#include <iostream>
using namespace std;

void PrintSubstr(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j <= length-i; j++)
        {
            for (int k = i; k < i + j; k++)
            {
                cout << str[k];
            }
            cout << endl;
        }
    }
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    PrintSubstr(str);
    return 0;
}