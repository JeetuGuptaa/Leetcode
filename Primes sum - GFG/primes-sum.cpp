//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    
    string isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return "No";
            }
        }
        return "Yes";
    }
    
    

    string isSumOfTwo(int n){
        if(n<=3) return "No";
        
        //if n is even return true
        else if(n%2==0){
            return "Yes";
        }
        
        //if n is odd then one prime must be EVEN since sum of 2 odd numbers is ODD and only even prime is 2
        return isPrime(n-2);
        
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