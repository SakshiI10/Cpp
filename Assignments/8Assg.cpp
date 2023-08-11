//Write a C++ program that prompts the user to input three integer values and find the greatest value of the three values.
#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1>n2 & n1>n3){
        cout << "Highest number is: " << n1;
    }
    if (n2>n1 & n2>n3){
        cout << "Highest number is: " << n2;
    }
    else{
        cout << "Highest number is: " << n3;
    }
}