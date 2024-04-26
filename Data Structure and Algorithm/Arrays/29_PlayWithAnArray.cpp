#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> formatArray(vector<int> a, int n)
{
    // Sorting the array
    sort(a.begin(), a.end());

    // Swapping adjacent elements to meet the condition
    for (int i = 1; i < n - 1; i += 2)
    {
        swap(a[i], a[i + 1]);
    }
    return a;
}

int main()
{
    int n = 5;
    vector<int> arr = {5, 4, 3, 2, 1};
    vector<int> result = formatArray(arr, n);

    // Checking if the result satisfies the condition
    bool isValid = true;
    
    for (int i = 1; i < n - 1; i += 2)
    { // Loop through odd indices
        if (result[i] <= result[i - 1])
        { // Check if the odd-indexed element is less than or equal to its even-indexed neighbor
            isValid = false;
            break;
        }
    }
    // Printing the result based on whether it satisfies the condition
    if (isValid)
    {
        for (int i = 0; i < n; i++)
        {
            cout << result[i] << " ";
        }
    }
    else
    {
        cout << "0";
    }
    return 0;
}
