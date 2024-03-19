#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchEle(vector<int>& a, int x) {
        // Iterate through the array to search for element x
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == x) {
                return true; // Element found
            }
        }
        return false; // Element not found
    }

    void insertEle(vector<int>& a, int y, int yi) {
        // Check if yi is a valid index
        if (yi >= 0 && yi <= a.size()) {
            a.insert(a.begin() + yi, y); // Insert element y at index yi
            cout << "1\n";
        } else {
            cout << "0\n"; // Invalid index
        }
    }

    bool deleteEle(vector<int>& a, int z) {
        // Iterate through the array to find the first occurrence of element z
        for (int i = 0; i < a.size(); i++) {
            if (a[i] == z) {
                a.erase(a.begin() + i); // Delete the element at index i
                return true; // Element deleted successfully
            }
        }
        return false; // Element not found, deletion unsuccessful
    }
};

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    Solution obj;

    int x, y, yi, z;
    cin >> x >> y >> yi >> z;

    cout << obj.searchEle(A, x) << " ";
    obj.insertEle(A, y, yi);
    cout << obj.deleteEle(A, z) << endl;

    return 0;
}
