//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        long long sum = 0, count = 0;
        unordered_map<long long, long long> track;
        track[0]=1;
        
        for(int i=0;i<n;i++){
            sum+=(long long)arr[i];
            if(track.count(sum)>0){
                track[sum]+=1;
            }
            else track[sum] = 1;
            
        }
        
        for(auto x : track){
            if(x.second>=2){
                count+= (long long)((x.second) * (x.second-1))/2;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends