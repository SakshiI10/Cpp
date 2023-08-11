// Program to check if two strings are same or not.

#include <iostream>
//#include <string>
using namespace std;

void Check(char str1[], char str2[])
{
    int i = 0;
    bool Check = true;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            Check = false;
            break;
        }
    }

    // Check if both strings have reached the end
    if (str1[i] != '\0' || str2[i] != '\0')
    {
        Check = false;
    }

    if (Check)
    {
        cout << "Same String" << endl;
    }
    else
    {
        cout << "Different String" << endl;
    }
}
int main()
{
    char str1[] = "sakshi";
    char str2[] = "sakshii";
    Check(str1, str2);
    return 0;
}

/* void Check(string str1, string str2)
{
    if (str1 == str2)
    {
        cout << "Same string";
    }
    else
    {
        cout << "Different string";
    }
}
int main()
{
    string str1 = "sakshi";
    string str2 = "sakshi";
    Check(str1, str2);
    return 0;
} */