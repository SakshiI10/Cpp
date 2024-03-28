// Write a function to check if all elements in the array are palindrome.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int num)
    {
        int originalNum = num;
        int reversedNum = 0;
        while (num > 0)
        {
            int digit = num % 10;
            reversedNum = reversedNum * 10 + digit;
            num /= 10;
        }
        return originalNum == reversedNum;
    }

    int PalinArray(int A[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            if (!isPalindrome(A[i]))
            {
                return 0; // If any number is not palindrome, return 0
            }
        }
        return 1; // All numbers are palindrome, return 1
    }
};

int main()
{
    int arr[] = {111, 222, 333, 444, 555};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution sol;
    int result = sol.PalinArray(arr, n);

    if (result == 1)
        cout << "All elements in the array are palindrome." << endl;
    else
        cout << "Not all elements in the array are palindrome." << endl;

    return 0;
}
