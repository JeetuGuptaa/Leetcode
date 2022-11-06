//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *a, int n, int k)
    {
        deque<int> m;
        for(int i=0;i<k;i++){
            if(m.size()==0){
                m.push_back(a[i]);
            }
            else{
                while( m.size()>0 && m.back()<a[i] ){
                    m.pop_back();
                }
                m.push_back(a[i]);
            }
        }
        vector<int> ans;
        ans.push_back(m.front());
        int j = 0;
        for(int i=k;i<n;i++){
            if(m.front()==a[j]){
                m.pop_front();
            }
            if(m.size()==k){
                m.pop_front();
            }
            while( m.size()>0 && m.back()<a[i] ){
                    m.pop_back();
                }
            m.push_back(a[i]);
            ans.push_back(m.front());
            j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends