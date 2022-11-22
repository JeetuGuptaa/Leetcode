//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	int countSmall(vector<int> &a, int i){
	    int count = 0;
	    for(int j = i-1;j>=0;j--){
	        if(a[i]>a[j]){
	            count++;
	        }
	    }
	    return count;
	}
	
	int countLarge(vector<int> &a, int i){
	    int count = 0;
	    for(int j=i+1;j<a.size();j++){
	        if(a[i]<a[j]){
	            count++;
	        }
	    }
	    return count;
	}
	
	int countTriplets(vector<int>a){
	    int n = a.size();
	    int count = 0;
	    for(int i=0;i<n;i++){
	        int small_count = countSmall(a, i);
	        int large_count = countLarge(a, i);
	        count += small_count*large_count;
	    }
	    return count;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.countTriplets(nums);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends