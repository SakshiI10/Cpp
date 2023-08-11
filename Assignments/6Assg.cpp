//Write a C++ program to Check if a year is leap year or not.
#include <iostream>
using namespace std;

int main(){
    int y;
    cout << "Enter year: ";
    cin >> y;
    if(y%4==0)
    cout << "Leap year";
    else
    cout << "Not a leap year";
}