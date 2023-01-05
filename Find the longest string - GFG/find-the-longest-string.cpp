//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string longestString(vector<string> &words)
    {
        sort(words.begin(), words.end());
        unordered_map<string, bool> m;
        string maxLength = "";
        for(int i=0;i<words.size();i++){
            string intermediate = "";
            bool flag = true;
            m[words[i]] = true;
            for(int j=0;j<words[i].size();j++){
                intermediate+=words[i][j];
                if(m.count(intermediate)>0){
                    continue;
                }
                else{
                    flag = false;
                    break;
                }
            }
            if(flag){
                if(words[i].length()>maxLength.size()){
                    maxLength = words[i];
                }
            }
        }
        
        return maxLength;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution obj;
        string w = obj.longestString(v);
        cout << w << "\n";
    }
    return 0;
}

// } Driver Code Ends