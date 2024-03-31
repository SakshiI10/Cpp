#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class Solution
{
public:
    pair<long long, int> maxNtype(long long arr[], long long n)
    {
        long long max = 0, index = 0, type;
        for (long long i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                index = i;
            }
        }

        if (arr[0] == max && arr[n - 2] > arr[n - 1])
            type = 2;
        else if (arr[n - 1] == max && arr[1] > arr[0])
            type = 1;
        else if (arr[(n + index - 1) % n] > arr[(n + index + 1) % n])
            type = 4;
        else
            type = 3;

        return {max, type};
    }
};

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        pair<long long, int> pair = ob.maxNtype(arr, n);
        cout << pair.first << " " << pair.second << "\n";
    }
    return 0;
}
