//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.

void revQ(queue<int> &q){
    if(q.empty()) return ;
    
    int front = q.front();
    q.pop();
    
    revQ(q);
    
    q.push(front);
    return ;
}

queue<int> rev(queue<int> q)
{
    revQ(q);
    return q;
}