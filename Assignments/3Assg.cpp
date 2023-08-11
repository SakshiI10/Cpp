//Write a C++ program to prompt the user to input her/his name and print the name on the screen.
#include <iostream>
using namespace std;

int main(){
    char name [50];
    cout << "Enter your name: ";
    cin >> name;
    cout << "Name : " << name;
}
