#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  int thirdLargest(int a[], int n)
  {
    vector<int> sortedArr(a, a + n);
    sort(sortedArr.begin(), sortedArr.end());
    return sortedArr[n - 3];
  }
};

int main()
{
  Solution sol;
  
  int arr[] = {1, 2, 3, 4, 5, 7, 8};
  int n = sizeof(arr) / sizeof(arr[0]);

  int result = sol.thirdLargest(arr, n);
  cout << result;

  return 0;
}