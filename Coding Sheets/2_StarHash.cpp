#include <iostream>
using namespace std;

int main()
{
    char str[100] = " ";
    cin.getline(str, 100);
    int a = 0, b = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '#')
        {
            a++;
        }
        if (str[i] == '*')
        {
            b++;
        }
    }
    if(a>b){
        cout << a;
    }
    else if(a<b){
        cout << a;
    }
    else{
        cout << a+b;
    }
    return 0;
}