#include <vector>
#include <iostream>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            result.push_back(i + 1); // 1-based indexing
        }
    }

    return result;
}

int main()
{
    int N = 5;
    int Arr[] = {15, 2, 45, 12, 7};

    vector<int> result = valueEqualToIndex(Arr, N);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
