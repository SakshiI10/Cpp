//Write a C++ program to swap two values using CALL BY REFERENCE.
#include <iostream>
using namespace std;

void swap(int &x, int &y){
    int temp;
    temp =x;
    x = y;
    y = temp;
}

int main(){
    int a=2, b=3;
    cout << "Before swapping\n" << "A = " << a << "\nB = " << b;
    swap(a, b);
    cout << "\nAfter swapping\n" << "A = " << a << "\nB = " << b;
}