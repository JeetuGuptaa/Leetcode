//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    long long minE = 1000000000001;
    long long maxE = 0;
    
    for(int i=0;i<n;i++){
        if(a[i]<minE){
            minE= a[i];
        }
        if(a[i]>maxE){
            maxE = a[i];
        }
    }
    return pair<long long, long long>({minE, maxE});
}