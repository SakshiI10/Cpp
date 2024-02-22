class Solution{
    public:
    int leftElement(int a[], int n) {
        std::vector<int> sortedArr(a, a + n);
        sort(sortedArr.begin(), sortedArr.end());
        int ele;
        for (int i = 0; i < n; i++) {
            ele = sortedArr[i / 2];
        }

        return ele;
    }
};