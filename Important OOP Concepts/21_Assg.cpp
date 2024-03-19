#include<iostream>
#include<string>
#include<cstring>
using namespace std;

union my_union {
    int age;
    char name[50]; // Using a character array to store the name
    int marks;
};

int main() {
    union my_union rk;
    strcpy(rk.name, "Radhakrushna Mahadik"); // Copying the string into the char array
    cout << "Name is " << rk.name << endl;

    rk.age = 70;
    cout << "Age of " << rk.name << " is " << rk.age << endl;
    return 0;
}
