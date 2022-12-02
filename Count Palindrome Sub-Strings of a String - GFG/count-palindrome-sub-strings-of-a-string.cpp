//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}


// } Driver Code Ends

bool isPalindrome(char s[], int start, int end){
    while(start<=end){
        if(s[start]!=s[end]) return false;
        start++;
        end--;
    }
    return true;
}

int CountPS(char S[], int N)
{
    int ans = 0;
   for(int i=0; i<N;i++){
       for(int j = i+1;j<N;j++){
           ans+=isPalindrome(S,i, j);
       }
   }
   return ans;
}



