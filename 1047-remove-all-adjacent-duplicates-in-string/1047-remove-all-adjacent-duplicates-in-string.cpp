class Solution {
public:
    string removeDuplicates(string s) {
        string ans = "";
        int i =0;
        while(i<s.size()){
            if(ans.size()==0){
                ans+=s[i];
            }
            else{
                if(ans.back()==s[i]){
                    ans.pop_back();
                }
                else{
                    ans+=s[i];
                }
            }
            i++;
        }
        
        return ans;
    }
};