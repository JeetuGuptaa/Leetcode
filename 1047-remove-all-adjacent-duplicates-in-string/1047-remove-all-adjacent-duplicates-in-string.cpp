class Solution {
public:
    string removeDuplicates(string s) {
        int i =0, j =1;
        while(j<s.size()){
            
            if(s[i]==s[j]){
                s[i] = '0';
                s[j] = '0';
                j++;
                while(i>0 && s[i]=='0'){
                    i--;
                }
                if(s[i]=='0'){
                    i=j;
                    j++;
                }
            }
            else{
                i++;
                if(i<s.size() && s[i]=='0'){
                    i=j;
                }
                j++;
            }
        }
        
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                ans+=s[i];
            }
        }
        return ans;
    }
};