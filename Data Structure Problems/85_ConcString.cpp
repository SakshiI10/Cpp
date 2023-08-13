// Concatenate 2 strings.

#include <iostream>
using namespace std;

void Concat(char str1[], char str2[], char str3[])
{
    int k = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        str3[k] = str1[i];
        k++;
    }
    for (int j = 0; str2[j] != '\0'; j++)
    {
        str3[k] = str2[j];
        k++;
    }
    str3[k]='\0';
}
int main()
{
    char str1[100], str2[100], str3[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter first string: ";
    cin.getline(str2, 100);
    Concat(str1, str2, str3);
    cout << str3;
    return 0;
}