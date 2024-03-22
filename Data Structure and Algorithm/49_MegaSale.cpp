#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long maxProfit(int a[], int n, int m)
{
    long long sum = 0;
    int count = 0;
    vector<long long> SortedArr;

    // Collect negative values
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            SortedArr.push_back(a[i]);
        }
    }

    // Sort negative values
    sort(SortedArr.begin(), SortedArr.end());

    // Add up top 'm' negative values
    for (int i = 0; i < SortedArr.size() && count < m; i++)
    {
        sum += SortedArr[i];
        count++;
    }

    return -sum;
}

// Function declaration
long long maxProfit(int a[], int n, int m);

int main()
{
    int arr[] = {8, -4, -9, 3, -1, -2, 9, 6};
    int n = 8; // Size of the array
    int m = 1; // Maximum number of laptops to be sold in a day

    // Call the maxProfit function and store the result
    long long result = maxProfit(arr, n, m);

    // Output the result
    cout << "Maximum profit: " << result << endl;

    return 0;
}
