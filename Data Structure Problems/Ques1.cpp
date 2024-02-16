#include <iostream>
using namespace std;

int CountDigits(int number) {
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Input number is " << num << endl;
    cout << "The number of digits in " << num << " is: " << CountDigits(num) << endl;
    return 0;
}
