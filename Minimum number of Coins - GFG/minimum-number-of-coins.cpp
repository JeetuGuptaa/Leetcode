//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int> ans;
        vector<int> v(10, 0);
        v[0]= 2000;
        v[1] = 500;
        v[2]=200;
        v[3]=100;
        v[4]=50;
        v[5]=20;
        v[6]=10;
        v[7]=5;
        v[8]=2;
        v[9]=1;
        
        for(int i=0;i<10;i++){
            int num = N/v[i];
            N= N%v[i];
            for(int j = 0;j<num;j++){
                ans.push_back(v[i]);
            }
            if(N==0) break;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends