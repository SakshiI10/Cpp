#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(int n, vector<int> &arr) {
        int expectedSum = (n*(n+1))/2, actualSum=0;
        
        for(int i : arr){
            actualSum = actualSum+i;
        }
        
        int difference = expectedSum-actualSum;
        return difference;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {1, 4, 3};
    int n1 = 4;
    cout << "Output for {1, 4, 3}: " << sol.missingNumber(n1, arr1) << endl;

    vector<int> arr2 = {2, 5, 3, 1};
    int n2 = 5;
    cout << "Output for {2, 5, 3, 1}: " << sol.missingNumber(n2, arr2) << endl;

    return 0;
}
