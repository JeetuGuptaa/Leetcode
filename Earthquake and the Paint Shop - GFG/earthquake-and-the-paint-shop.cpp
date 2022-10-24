//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <bits/stdc++.h>
struct alphanumeric {
    string name;
    int count;
};

class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        map<string, int> maps;
        for(int i=0;i<N;i++){
            string s = A[i];
            if(maps.count(s)==0){
                maps[s]= 1;
            }
            else{
                maps[s]+=1;
            }
        }
        
        vector<alphanumeric> v;
        
       // v.sort(v.begin(), v.end());
        
        for(auto item:maps){
            alphanumeric element;
            element.name = item.first;
            element.count = item.second;
            v.push_back(element);
        }
       // sort(v.begin(), v.end());
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans) cout << u.name << " " << u.count << "\n";
    }
}
// } Driver Code Ends