/* 
Constructor:
1. Default Constructor: A default constructor is a constructor that doesn't take any arguments. If no constructor is defined explicitly, the compiler provides a default constructor automatically.

class MyClass {
public:
    // Default Constructor
    MyClass() {
        // Initialization code
    }
};

2. Parameterized Constructor: A parameterized constructor takes arguments to initialize data members with specific values.

class MyClass {
private:
    int value;

public:
    // Parameterized Constructor
    MyClass(int v) {
        value = v;
    }
};

3. Copy Constructor: A copy constructor creates a new object as a copy of an existing object of the same class.

class MyClass {
private:
    int value;

public:
    // Copy Constructor
    MyClass(const MyClass& obj) {
        value = obj.value; // Copying value from obj to the current object
    }
};
*/

/* 
Destructors:
A destructor is a special member function called when an object goes out of scope or is explicitly deleted. It performs cleanup tasks like releasing dynamically allocated memory or releasing resources acquired during object lifetime.

class MyClass {
public:
    // Constructor
    MyClass() {
        // Initialization code
    }

    // Destructor
    ~MyClass() {
        // Cleanup code
    }
};
*/

#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Default Constructor
    MyClass() {
        cout << "Default Constructor called" << value << endl;
        value = 0; // Initialize value to 0
    }

    // Parameterized Constructor
    MyClass(int v) {
        cout << "Parameterized Constructor called" << value << endl;
        value = v; // Initialize value with provided value
    }

    // Copy Constructor
    MyClass(const MyClass& obj) {
        cout << "Copy Constructor called" << value << endl;
        value = obj.value; // Copy value from obj to the current object
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj1;        // Default Constructor called
    MyClass obj2(10);    // Parameterized Constructor called
    MyClass obj3(obj1);  // Copy Constructor called

    return 0; // Destructor called for obj3, obj2, and obj1 in reverse order
}