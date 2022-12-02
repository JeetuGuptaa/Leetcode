//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        if(M!=N) return 0;
        int a1= 0, b1 = 0, a2 = 0, b2 = 0;
        
        for(int i = 0;i<M;i++){
            if(S[i]=='A') a1++;
            else if(S[i]=='B') b1++;
        }
        
        for(int i = 0;i<N;i++){
            if(T[i]=='A') a2++;
            else if(T[i]=='B') b2++;
        }
        
        if((a1!=a2) || (b1!=b2)) return false;
        
        int i = 0, j = 0;
        while(j<N){
            if(T[j]=='#'){
                j++;
                continue;
            }
            else if(T[j]=='A'){
                while(i<M && S[i]!='A'){
                    if(S[i]=='B') return false;
                    i++;
                }
                if(i<j || i==M) return false;
                i++;
            }
            else{
                while(i<M && S[i]!='B'){
                    if(S[i]=='A') return false;
                    i++;
                }
                if(i>j ||i==M) return false;
                i++;
            }
            j++;
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends