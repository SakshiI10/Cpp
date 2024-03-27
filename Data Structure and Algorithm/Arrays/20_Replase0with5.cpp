#include <iostream>
#include <vector>

using namespace std;

int convertFive(int n) {
    // Convert the integer to an array of digits
    vector<int> digits;
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }

    // Replace 0 with 5 in the array
    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] == 0) {
            digits[i] = 5;
        }
    }

    // Convert the array back to an integer
    int result = 0;
    int multiplier = 1;
    for (int i = 0; i < digits.size(); i++) {
        result += digits[i] * multiplier;
        multiplier *= 10;
    }

    return result;
}

int main() {
    int N = 1004;
    int result = convertFive(N);

    cout << "Input: " << N << endl;
    cout << "Output: " << result << endl;

    return 0;
}
