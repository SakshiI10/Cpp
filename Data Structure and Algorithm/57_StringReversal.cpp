#include <iostream>
#include <string>

using namespace std;

string reverseString(string str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed.push_back(str[i]);
    }
    return reversed;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    string reversed = reverseString(input);
    
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
