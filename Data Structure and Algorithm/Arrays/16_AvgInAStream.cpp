#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<float> streamAvg(int arr[], int n)
    {
        vector<float> result;
        float sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            float average = sum / (i + 1);
            result.push_back(average);
        }
        return result;
    }
};

int main()
{
    Solution solution;

    int n = 5;
    int arr[] = {10, 20, 30, 40, 52};

    vector<float> result = solution.streamAvg(arr, n);

    cout << "Running average of the stream: ";
    for (float avg : result)
    {
        cout << avg << " ";
    }

    return 0;
}
