#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void strangeSort(int arr[], int n, int k)
    {
        int kValue = arr[k - 1];
        vector<int> copy;

        for (int i = 0; i < n; i++)
        {
            if (i != k - 1)
            {
                copy.push_back(arr[i]);
            }
        }
        sort(copy.begin(), copy.end());

        copy.insert(copy.begin() + (k - 1), kValue);

        for (int i = 0; i < n; i++)
        {
            arr[i] = copy[i];
        }
    }
};

int main()
{
    Solution sol;
    int arr1[] = {3, 12, 30, 79, 2};
    int n1 = 5, k1 = 2;
    sol.strangeSort(arr1, n1, k1);

    cout << "Output for {3, 12, 30, 79, 2}: " << endl;
    for (int i = 0; i < n1; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
