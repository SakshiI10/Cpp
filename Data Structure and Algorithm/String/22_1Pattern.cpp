#include <iostream>
#include <vector>
using namespace std;

class Solution{
public: 
    vector<string> pattern(string s)
    {
        vector<string> result;
        for(int i = 0; i < s.length(); i++){
            string pattern_line = "";
            for(int j = 0; j < s.length()-i; j++){
                pattern_line += s[j];
            }
            result.push_back(pattern_line);
        }
        return result;
    }
};

int main()
{
    Solution solution;
    string input = "GeeK";
    vector<string> result = solution.pattern(input);

    cout << "Input: " << input << endl;
    cout << "Output:" << endl;
    for (const auto &line : result)
    {
        cout << line << endl;
    }

    return 0;
}
