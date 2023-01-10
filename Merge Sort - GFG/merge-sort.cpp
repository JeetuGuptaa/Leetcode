//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         int size = r-l+1;
         int* a = new int[size];
         
         int i=l, j = m + 1, index = 0;
         while(i<=m && j<=r){
             if(arr[i]<arr[j]){
                 a[index] = arr[i];
                 i++;
                 index++;
             }
             else{
                 a[index] = arr[j];
                 j++;
                 index++;
             }
         }
         
         while(i<=m){
             a[index] = arr[i];
             i++;
             index++;
         }
         while(j<=r){
             a[index] = arr[j];
             j++;
             index++;
         }
         
         index = 0;
         for(int i=l;i<=r;i++){
             arr[i] = a[index];
             index++;
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r) return ;
        int mid = l + (r-l)/2;
        
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends