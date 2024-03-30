#include <iostream>
#include <string>
using namespace std;

string conCat(string s1, string s2) {
    string str = s1 + s2;
    return str;
}

int main() {
    string s1 = "Hello, ";
    string s2 = "world!";
    
    string concatenated = conCat(s1, s2);
    cout << "Concatenated string: " << concatenated << endl;

    return 0;
}
