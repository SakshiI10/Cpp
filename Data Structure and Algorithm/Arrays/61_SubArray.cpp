#include <iostream> 
#include <vector>
using namespace std;

vector<int> findSubarrayWithGivenSum(const vector<int> &nums, int targetSum)
{
    vector<int> result;
    int currentSum = 0;
    int start = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        currentSum += nums[i];

        while (currentSum > targetSum && start <= i)
        {
            currentSum -= nums[start];
            start++;
        }

        if (currentSum == targetSum)
        {
            for (int j = start; j <= i; ++j)
            {
                result.push_back(nums[j]);
            }
            return result;
        }
    }

    return result; // If no subarray found
}
 
int main()
{
    vector<int> nums = {1, 4, 20, 3, 10, 5};
    int targetSum = 33;
    vector<int> subarray = findSubarrayWithGivenSum(nums, targetSum);

    if (!subarray.empty())
    {
        cout << "Subarray with sum " << targetSum << " found: ";
        for (int num : subarray)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "No subarray found with sum " << targetSum << endl;
    }

    return 0;
}
