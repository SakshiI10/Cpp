#include <iostream>
using namespace std;

class Solution
{
public:
    int getCount(int arr[], int n, int num1, int num2)
    {
        int count = 0;

        // Find the indices of num1 and num2 in the array
        int leftIndex = -1, rightIndex = -1;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] == num1)
            {
                leftIndex = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; --i)
        {
            if (arr[i] == num2)
            {
                rightIndex = i;
                break;
            }
        }

        // If either num1 or num2 not found, return -1
        if (leftIndex == -1 || rightIndex == -1)
            return -1;

        // Count elements between num1 and num2
        for (int i = leftIndex + 1; i < rightIndex; ++i)
        {
            count++;
        }

        return count;
    }
};

int main()
{
    Solution s;
    
    int Arr[] = {4, 2, 1, 10, 6};
    int num1 = 4, num2 = 6;
    int n = sizeof(Arr) / sizeof(Arr[0]);

    int result = s.getCount(Arr, n, num1, num2);

    cout << "Number of elements between " << num1 << " and " << num2 << " (excluding them): " << result << endl;

    return 0;
}
