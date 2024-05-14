#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int isPossible(string S)
{
    unordered_map<char, int> freqMap;

    // Count the frequency of each character
    for (char ch : S)
    {
        freqMap[ch]++;
    }

    // Check for odd frequency characters
    int oddCount = 0;
    for (auto it = freqMap.begin(); it != freqMap.end(); it++)
    {
        if (it->second % 2 != 0)
        {
            oddCount++;
            if (oddCount > 1)
            {
                return 0; // More than one character with odd frequency
            }
        }
    }

    // If there's at most one character with an odd frequency, return 1 (true)
    return 1;
}

int main()
{
    string S1 = "geeksogeeks";
    string S2 = "geeksforgeeks";

    cout << "Output for S1: " << (isPossible(S1) ? "Yes" : "No") << endl;
    cout << "Output for S2: " << (isPossible(S2) ? "Yes" : "No") << endl;

    return 0;
}
