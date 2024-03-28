#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<long long> countElements(long long arr[], long long n) 
    {
        long long count = 1; // First element is always counted
        long long maxSoFar = arr[0]; // Initialize maximum encountered so far
        vector<long long> result; // Vector to store elements before which all elements are smaller
        
        // Push the first element into the result vector
        result.push_back(arr[0]);
        
        for(long long i = 1; i < n; ++i)
        {
            if(arr[i] > maxSoFar)
            {
                // Current element is greater than the maximum encountered so far
                maxSoFar = arr[i]; // Update maximum encountered so far
                count++; // Increment count
                result.push_back(arr[i]); // Push the current element into the result vector
            }
        }
        
        result.insert(result.begin(), count); // Insert the count at the beginning of the result vector
        return result; // Return the result vector
    }
};

int main()
{
    Solution sol;
    long long arr1[] = {10, 40, 23, 35, 50, 7};
    long long n1 = sizeof(arr1) / sizeof(arr1[0]);
    vector<long long> result1 = sol.countElements(arr1, n1);
    cout << "Output for {10, 40, 23, 35, 50, 7}: " << result1[0] << endl;
    cout << "Elements before which all elements are smaller: ";
    for(size_t i = 1; i < result1.size(); ++i)
    {
        cout << result1[i] << " ";
    }
    cout << endl;

    long long arr2[] = {5, 4, 1};
    long long n2 = sizeof(arr2) / sizeof(arr2[0]);
    vector<long long> result2 = sol.countElements(arr2, n2);
    cout << "Output for {5, 4, 1}: " << result2[0] << endl;
    cout << "Elements before which all elements are smaller: ";
    for(size_t i = 1; i < result2.size(); ++i)
    {
        cout << result2[i] << " ";
    }
    cout << endl;

    return 0;
}
