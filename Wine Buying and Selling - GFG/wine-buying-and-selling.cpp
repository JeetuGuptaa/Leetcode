//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
  public:
  
  int findNextBuyer(vector<int>& arr, int b){
      while(b<arr.size() && arr[b]<=0){
          b+=1;
      }
      return b;
  }
  
  int findNextSeller(vector<int>& arr, int s){
      while(s<arr.size() && arr[s]>=0){
          s+=1;
      }
      return s;
  }
  
  long long int wineSelling(vector<int>& Arr, int N){
      int b = findNextBuyer(Arr, 0),s = findNextSeller(Arr, 0);
      
      long long ans = 0;
      while(b<N && s<N){
          ans+=(long long)(abs(s-b) * min(abs(Arr[s]), Arr[b]));
          if(abs(Arr[s])>Arr[b]){
              Arr[s] = Arr[s] + Arr[b];
              Arr[b] = 0;
              b = findNextBuyer(Arr, b);
          }
          else if(abs(Arr[s])<Arr[b]){
              Arr[b] = Arr[b] + Arr[s];
              Arr[s] = 0;
              s = findNextSeller(Arr, s);
          }
          else{
              Arr[s] = 0;
              Arr[b] = 0;
              s = findNextSeller(Arr, s);
              b = findNextBuyer(Arr, b);
              
          }
      }
      
      return ans;
  }
};



//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends