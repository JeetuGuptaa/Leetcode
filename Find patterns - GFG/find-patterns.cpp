//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string s, string w){
        int ans = 0;
        int wPointer = 0;
        bool found = true;
        while(found){
            found = false;
        for(int i=0;i<s.size();i++){
            if(s[i]==w[wPointer]){
                s[i] ='1';
                wPointer++;
                if(wPointer == w.size()){
                    wPointer = 0;
                    ans++;
                    found = true;
                    break;
                }
            }
        }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends