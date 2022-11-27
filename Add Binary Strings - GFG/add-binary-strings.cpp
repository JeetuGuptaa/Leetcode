//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

    void reverse(string &s){
        for(int i = 0;2*i<s.size();i++){
            swap(s[i], s[s.size()-i-1]);
        }
    }
    
    
	string addBinary(string a, string b)
	{
	    char carry = '0';
	    int i = a.size()-1, j = b.size()-1;
	    string output = "";
	    while(i>=0 && j>=0){
	        int one = 0;
	        if(a[i]=='1'){
	            one+=1;
	        }

	        if(b[j]=='1'){
	            one+=1;
	        }
	        
	        if(carry =='1'){
	            one+=1;
	        }

	        if(one == 3){
	            carry = '1';
	            output+='1';
	        }
	        else if(one == 2){
	            output+='0';
	            carry ='1';
	        }
	        else if(one == 1){
	            output+='1';
	            carry = '0';
	        }
	        else{
	            output +='0';
	            carry = '0';
	        }
	        i--;
	        j--;
	    }
	    
	    while(i>=0){
	        int one = 0;
	        if(a[i]=='1'){
	            one+=1;
	        }
	        if(carry == '1'){
	            one+=1;
	        }
	        
	        if(one == 2){
	            carry = '1';
	            output+='0';
	        }
	        else if(one == 1){
	           output+='1';
	           carry = '0';
	        }
	        else{
	            output+='0';
	            carry = '0';
	        }
	        i--;
	    }
	    
	    
	    
	    while(j>=0){
	        int one = 0;
	        if(b[j]=='1'){
	            one+=1;
	        }
	        if(carry == '1'){
	            one+=1;
	        }
	        
	        if(one == 2){
	            carry = '1';
	            output+='0';
	        }
	        else if(one == 1){
	           output+='1';
	           carry = '0';
	        }
	        else{
	            output+='0';
	            carry = '0';
	        }
	        j--;
	    }
	    
	    if(carry =='1'){
	        output+='1';
	    }
	    
	    reverse(output);
	    
	    int zero = 0;
	    for(int i=0;i<output.size();i++){
	        if(output[i]=='0') zero+=1;
	        else break;
	    }
	    
	    
	   return output.substr(zero, output.size());
	    
	    
	    
	    
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string A, B; cin >> A >> B;
		Solution ob;
		cout << ob.addBinary (A, B);
		cout << "\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends