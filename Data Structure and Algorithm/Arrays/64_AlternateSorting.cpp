#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> alternateSort(int arr[], int N)
    {
        sort(arr, arr + N);

        vector<int> result(N);
        int left = 0, right = N - 1;

        for (int i = 0; i < N; i++)
        {
            if (i % 2 == 0)
            {
                result[i] = arr[right];
                right--;
            }
            else
            {
                result[i] = arr[left];
                left++;
            }
        }
        return result;
    }
};

int main()
{
    Solution sol;

    int arr1[] = {7, 1, 2, 3, 4, 5, 6};
    int N1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<int> result1 = sol.alternateSort(arr1, N1);
    cout << "Output 1: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    int arr2[] = {1, 6, 9, 4, 3, 7, 8, 2};
    int N2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<int> result2 = sol.alternateSort(arr2, N2);
    cout << "Output for Test Case 2: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
