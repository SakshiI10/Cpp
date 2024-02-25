class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        vector <int> sortedArr(a, a+n);
        sort(sortedArr.begin(), sortedArr.end());
        return sortedArr[n-3];
    }
};