class Solution {
public:
    string makeGood(string s) {
        if(s.length()==1) return s;
        stack<char> string_so_far;
        
        int i =0;
        while(i<s.size()){
            if(string_so_far.empty()){
                string_so_far.push(s[i]);
            }
            else{
                int diff = string_so_far.top() - s[i];
                if(abs(diff)==32){
                    string_so_far.pop();
                }
                else{
                    string_so_far.push(s[i]);
                }
            }
            i+=1;
        }
        
        string ans= "";
        while(!string_so_far.empty()){
            ans = string_so_far.top() + ans;
            string_so_far.pop();
        }
        return ans;
    }
};