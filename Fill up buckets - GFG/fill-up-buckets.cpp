//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        if(n==1) return capacity[0];
        sort(capacity.begin(), capacity.end());
        long ans = 1;
        long mod = 1000000007;
        for(int i = 0;i<n;i++){
            ans = ((ans%mod)*((long long)(capacity[i]-i)%mod))%mod;
        }
        
        return (int)ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>capacity(n);
		for(int i = 0; i < n; i++)
			cin >> capacity[i];
		Solution ob;
		int ans = ob.totalWays(n, capacity);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends