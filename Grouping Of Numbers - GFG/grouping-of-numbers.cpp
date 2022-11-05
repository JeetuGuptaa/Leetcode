//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxGroupSize(int arr[], int N, int k) {
        vector<int> remainder(k, 0);
        for(int i=0;i<N;i++){
            remainder[arr[i]%k] += 1;
        }
        int ans = 0;
        if(remainder[0]>0) ans +=1;
        int i = 1, j= k-1;
        while(i<j){
            
            ans += max(remainder[i], remainder[j]);
            
            i+=1;
            j-=1;
        }
        if(i==j){
            if(remainder[i]>0){
                ans+=1;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.maxGroupSize(arr,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends