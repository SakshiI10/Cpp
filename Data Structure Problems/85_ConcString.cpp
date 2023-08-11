//Concatenate 2 strings.

#include <iostream>
using namespace std;

void ConcStr(char str1[], char str2[], char str3[])
{
    int i=0, j=0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str3[i] = str1[i];
    }
    
    for (j = 0; str2[j] != '\0'; j++)
    {
        str3[i] = str2[j];
        i++;
    }
    
    str3[i]='\0';
}
int main()
{
    char str1[] = "Sakshi ";
    char str2[] = "Ingole";
    char str3[100];
    ConcStr(str1, str2, str3);
    cout << str3 << endl;
    return 0;
}