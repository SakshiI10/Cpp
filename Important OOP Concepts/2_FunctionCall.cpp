#include<iostream>
using namespace std;

int addition(int a, int b);
// Here function is declared here we can define the function later here and hence we can use it further

// Pass by value
// Here copy of value is passed hence any changes made to it won't affect original values.
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Pass by pointer
// Here the value of the memory location is passed to the variable 
void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// pass by reference
// Here memory location is obtained and it will be used further to change the content at that memory location 
void swap3(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int getSum(int a, int b){
    return a + b;
}

int getSum(int a, int b, int c){
    return a + b + c;
}

double getSum(double a, double b){
    return a + b;
}
int main(){
    // cout<<addition(5,4)<<endl;

    int a = 10;
    int b = 20;

    cout<<"Value of a before swap "<<a<<endl;
    cout<<"Value of b before swap "<<b<<endl;

    swap3(a, b);

    cout<<"Value of a after swap "<<a<<endl;
    cout<<"Value of b after swap "<<b<<endl;

    cout<<getSum(10,20)<<endl;
    cout<<getSum(10,20,30)<<endl;
    cout<<getSum(10.2, 9.8)<<endl;


    return 0;
}

// protoyped function is used here 
int addition(int first, int second){
    return first + second;
}