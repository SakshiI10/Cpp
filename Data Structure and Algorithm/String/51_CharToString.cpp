#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string chartostr(char arr[], int n) {
        string result;
        for (int i = 0; i < n; ++i) {
            result += arr[i];
        }
        return result;
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the size of the character array: ";
    cin >> n;

    char arr[n];
    cout << "Enter " << n << " characters: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    string result = solution.chartostr(arr, n);
    cout << "Converted string: " << result << endl;

    return 0;
}
