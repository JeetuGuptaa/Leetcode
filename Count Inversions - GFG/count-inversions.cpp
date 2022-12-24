//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long countMergeInv(long long* a, long long start, long long end){
    long long size = end-start + 1;
    long long mid = start + (end-start)/2;
    
    long long* newA = new long long[size];
    
    long long i = start, j = mid+1, index = 0;
    long long count = 0;
    while(i<=mid && j<=end){
        if(a[j]<a[i]){
            count+=(long long)(mid-i+1);
            newA[index]= a[j];
            j+=(long long)1;
            index+=(long long)1;
        }
        else{
            newA[index] = a[i];
            i+= (long long)1;
            index+= (long long)1;
        }
    }
    
    while(i<=mid){
        newA[index] = a[i];
        i+= (long long)1;
        index+= (long long)1;
    }
    
    while(j<=end){
        newA[index] = a[j];
        j+= (long long)1;
        index+= (long long)1;
    }
    
    index = 0;
    while(start<=end){
        a[start] = newA[index];
        start+= (long long)1;
        index+= (long long)1;
    }
    return count;
}

long long countInversion(long long* a, long long start, long long end){
    if(start>=end) return 0;
    long long mid = start + (end-start)/2;
    
    long long left = countInversion(a, start, mid);
    long long right = countInversion(a, mid+1, end);
    long long myCount = countMergeInv(a, start, end);
    
    return (left + right + myCount);
}

    long long int inversionCount(long long arr[], long long N)
    {
        return countInversion(arr, 0, N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends