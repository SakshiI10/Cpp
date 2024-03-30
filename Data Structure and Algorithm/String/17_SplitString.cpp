#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{   
public:
    vector<string> splitString(string S) 
    { 
        string alpha;
        string num;
        string special;
        
        for(char ch: S){
            if(isalpha(ch)){
                alpha.push_back(ch);
            } else if (isdigit(ch)) {
                num.push_back(ch);
            } else {
                special.push_back(ch);
            }
        }
        
        // Return a vector containing the three strings
        return {alpha, num, special};
    } 
};

int main()
{
    Solution sol;
    
    string S="geeks01for02geeks03!!!";
    vector<string> result = sol.splitString(S);
    
    for (const string& s : result) {
        cout << s << endl;
    }
    
    return 0;
}
