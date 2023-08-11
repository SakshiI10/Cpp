//Write a C++ program to prompt the user to input 3 integer values and print these values in forward and reversed order.
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout << "Enter 3 integers: ";
    cin >> a >> b >> c;
    cout << "In forward series: " << a << b << c << "\n";
    cout << "In backward series: " << c << b << a << "\n";
}