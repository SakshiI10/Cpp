// Left Rotation and Right Rotation of a String.
//**Right Rotation

#include <iostream>
using namespace std;

void StrRev(char str[100], int start, int end)
{
    while (start < end)
    {
        char temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start++;
        end--;
    }
}
void LeftRot(char str[], int d)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    StrRev(str, 0, d - 1);
    StrRev(str, d, length - 1);
    StrRev(str, 0, length - 1);
}
void RightRot(char str[], int d)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    cout << length << endl;
    int mid = length - d;
    cout << mid << endl;
    StrRev(str, 0, length - 1);
    StrRev(str, 0, mid - 1);
    StrRev(str, mid, length - 1);
}
int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    LeftRot(str, 2);
    cout << "Left Rotation: " << str << endl;
    RightRot(str, 2);
    cout << "Right Rotation: " << str << endl;
    return 0;
}