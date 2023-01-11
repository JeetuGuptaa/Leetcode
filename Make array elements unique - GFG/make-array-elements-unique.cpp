//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long int minIncrements(vector<int> arr, int N) {
        map<int, int> nums;
        
        for(int i=0;i<N;i++){
            nums[arr[i]]++;
        }
        
        long long operation = 0;
        for(auto x:nums){
            if(x.second>1){
                operation+=(long long)(((long long)x.second * (long long)(x.second-1))/2);
                int k = 0;
                while(k<x.second-1){
                    nums[k+1+x.first]++;
                    k++;
                }
                x.second = 1;
            }
        }
        
        return operation;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends