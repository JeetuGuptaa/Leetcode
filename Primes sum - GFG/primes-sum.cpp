//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
        int i =2;
        int j;
        for(j = N;j>=2;j--){
            int flag = true;
            for(int k = 2;k*k<=j;k++){
                if(j%k==0){
                    flag = false;
                    break;
                }
            }
            if(flag) break;
        }
        
        while(j>=i){
            if(j+i==N) return "Yes";
            else if(i+j<N){
                i++;
                for( ;i<j;i++){
                    int flag = true;
                    for(int k = 2;k*k<=i;k++){
                        if(i%k==0){
                            flag = false;
                            break;
                        }
                    }
                    if(flag) break;
                    }
                }
            else{
                j--;
                for(;j>=2;j--){
            int flag = true;
            for(int k = 2;k*k<=j;k++){
                if(j%k==0){
                    flag = false;
                    break;
                }
            }
            if(flag) break;
        }
            }
        }
        return "No";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends