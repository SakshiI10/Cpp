#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();

        // Start from the least significant digit
        for (int i = n - 1; i >= 0; --i)
        {
            // Increment the current digit
            digits[i]++;

            // If there is no carry, return the result
            if (digits[i] < 10)
            {
                return digits;
            }
            else
            {
                // Carry over to the next digit
                digits[i] %= 10;
            }
        }
        // If there is still a carry after the loop, insert a new digit at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main()
{
    Solution solution;

    vector<int> digits1 = {1, 2, 3};
    vector<int> result1 = solution.plusOne(digits1);

    cout << "Result: ";
    for (int digit : result1)
    {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}