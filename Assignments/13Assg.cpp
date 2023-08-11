//Write a C++ program to add two integers. Make a function add() to add integers and display sum in main() function.
#include <iostream>
using namespace std;

int add(int x, int y){
    return(x+y);
}

int main(){
    int a=1, b=3;
    int z=add(a, b);;
    cout << "Addition = " << z;
}
