//Code again

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> extractIntegerWords(string s) {
    vector<string> result;
    string currentInt;

    for (char ch : s) {
        if (isdigit(ch)) {
            currentInt.push_back(ch);
        } else if (!currentInt.empty()) {
            result.push_back(currentInt);
            currentInt.clear();
        }
    }

    if (!currentInt.empty()) {
        result.push_back(currentInt);
    }

    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    vector<string> integers = extractIntegerWords(input);

    if (integers.empty()) {
        cout << "No integers found in the string." << endl;
    } else {
        cout << "Integers extracted from the string: ";
        for (const string& integer : integers) {
            cout << integer << " ";
        }
        cout << endl;
    }

    return 0;
}
