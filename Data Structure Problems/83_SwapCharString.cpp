//Swap characters in a string.

#include <iostream>
using namespace std;

void SwapChar(char str[], int a, int b)
{
    int temp = str[b];
    str[b] = str[a];
    str[a] = temp;
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    int a = 1, b = 2;
    SwapChar(str, a, b);
    cout << str;
    return 0;
}