//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  long long int rec(int coins[], int n, int sum, int index){
      if(index>=n || sum<0) return 0;
      if(sum ==0) return 1;
      
      //including 
      long long int x = rec(coins, n, sum-coins[index], index);
      
      //Not Including
      long long int y = rec(coins, n, sum, index+1);
      
      return (x+y);
      
  }
  
  long long memoFun(int coins[], int n, int sum, int index, vector<vector<long long int>>& memo){
      if(index>=n || sum<0) return 0;
      if(sum==0) return 1;
      
      //checking if the answer exists
      if(memo[sum][index]!=-1) return memo[sum][index];
      
      long long int x = memoFun(coins, n, sum-coins[index], index, memo);
      long long int y = memoFun(coins, n, sum, index+1, memo);
      
      memo[sum][index] = x+y;
      
      return memo[sum][index];
  }
  
  long long int count(int coins[], int N, int sum) {
      vector<vector<long long int>> memo(sum+1,vector<long long int>(N+1, -1) );
      return memoFun(coins, N, sum, 0, memo);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends