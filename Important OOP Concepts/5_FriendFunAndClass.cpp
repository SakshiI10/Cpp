/* 
Friend Function:
A friend function in C++ is a function that is not a member of a class but has access to the private and protected members of that class. It is declared using the friend keyword within the class declaration.
*/
/* 
#include <iostream>
using namespace std;

class MyClass {
private:
    int privateMember;
    // Declaration of friend function
    friend void friendFunction(MyClass& obj);

public:
    MyClass(int value) : privateMember(value) {}
};

// Definition of friend function
void friendFunction(MyClass& obj) {
    // Friend function can access private members of MyClass
    cout << "Private member value accessed by friend function: " << obj.privateMember << endl;
}

int main() {
    // Create an instance of MyClass
    MyClass obj(10);

    // Call friend function
    friendFunction(obj);

    return 0;
}
 */
/* 
Note:
When a function is declared as a friend inside a class, it means that the function is granted access to the private and protected members of that class. However, this does not make the friend function a member of the class in the usual sense.
*/

//Friend Class:
#include<iostream>
#include<string>
using namespace std;

class BaseClass{
    private:
        string name;
        int rollNo;
        int marks;
    
    public:
        BaseClass(int rollNo, string name, int marks){
            this->rollNo = rollNo;
            this->name = name;
            this->marks = marks;
        }
    friend class AnotherClass;
};

class AnotherClass{
    public:
        void displayBase(BaseClass& obj){
            cout<<"Roll number of student is "<<obj.rollNo<<endl;
            cout<<"Name of student is "<<obj.name<<endl;
            cout<<"Marks obtained by student are "<<obj.marks<<endl;
        }
};


int main(){
    BaseClass b1(20121032, "Sakshi Ingole", 100);
    AnotherClass a1;
    a1.displayBase(b1);
    return 0;
}
