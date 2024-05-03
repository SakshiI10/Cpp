#include <iostream>
using namespace std;

class Solution
{
public:
    int flippedIndexes(char a[], int n, int getAnswer[])
    {
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 'T')
            {
                a[i] = 'H';
                if (a[i + 1] == 'H')
                    a[i + 1] = 'T';
                else
                    a[i + 1] = 'H';
                getAnswer[count++] = i + 1;
            }
        }

        // Check if the last coin needs flipping
        if (a[n - 1] == 'T')
        {
            a[n - 1] = 'H';
            getAnswer[count++] = n;
        }

        return count;
    }
};

int main()
{
    Solution obj;

    int n = 6;
    char coins[] = {'H', 'T', 'H', 'T', 'T', 'H'};
    int getAnswer[n]; 
    int count = obj.flippedIndexes(coins, n, getAnswer);

    cout << count << endl;
    for (int i = 0; i < count; i++)
    {
        cout << getAnswer[i] << " ";
    }
    cout << endl;

    return 0;
}
