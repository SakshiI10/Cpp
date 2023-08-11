//Remove a character in a string

#include <iostream>
using namespace std;

void RemoveChar(char str[], int index){
    for(int i=index; str[i] != '\0'; i++){
        str[i]=str[i+1];
    }
}
int main()
{
    char str[100];
    cout << "Enter string: ";
    cin.getline(str, 100);
    int index=5;
    RemoveChar(str, index);
    cout << str;
    return 0;
}