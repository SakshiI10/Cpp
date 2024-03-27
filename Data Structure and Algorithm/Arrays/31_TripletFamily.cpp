#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findTriplet(int arr[], int n)
{
    vector<int> result;
    sort(arr, arr + n);

    // Traverse the array from left to right
    for (int i = 0; i < n; ++i)
    {
        int target = arr[i];

        // Use two pointers approach to find the pair that sums up to the target
        int left = 0, right = n - 1;
        while (left < right)
        {
            int currentSum = arr[left] + arr[right];
            if (currentSum == target)
            {
                result.push_back(arr[right]);
                result.push_back(arr[left]);
                result.push_back(target);
                return result;
            }
            else if (currentSum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    // If no triplet found, return an empty vector
    result.clear();
    return result;
}

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> result = findTriplet(arr, n);

    if (result.empty())
    {
        cout << "-1" << endl;
    }
    else
    {
        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
