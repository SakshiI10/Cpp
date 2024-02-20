#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findElements(int a[], int n)
{
    vector<int> result;
    if (n < 2)
    {
        return result;
    }
    // Copy the array to a vector for easier sorting
    vector<int> sortedArr(a, a + n);
    // Sort the vector in ascending order
    sort(sortedArr.begin(), sortedArr.end());
    for (int i = 0; i < n - 2; i++)
    {
        result.push_back(sortedArr[i]);
    }
    return result;
}

int main()
{
    int a1[] = {2, 8, 7, 1, 5};
    int n1 = sizeof(a1) / sizeof(a1[0]);
    vector<int> output1 = findElements(a1, n1);
    cout << "Output 1: ";
    for (int i = 0; i < output1.size(); i++)
    {
        cout << output1[i] << " ";
    }
    cout << endl;
    return 0;
}
