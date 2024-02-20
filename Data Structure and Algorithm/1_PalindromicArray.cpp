class Solution {
public:
    bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

// Function to check if all elements in the array are palindrome
int PalinArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (!isPalindrome(A[i])) {
            return 0; // If any number is not palindrome, return 0
        }
    }
    return 1; // All numbers are palindrome, return 1
}
};