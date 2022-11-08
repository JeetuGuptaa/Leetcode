class Solution {
public:
    string makeGood(string s) {
        if(s.length()==1) return s;
        int i =0, j = 1;
        while(j<s.length()){
            int diff = s[i] - s[j];
            if(abs(diff)==32){
                s[i] = '0';
                s[j] = '0';
                while(i>=0 && s[i]=='0'){
                    i=i-1;
                }
                j+=1;
                if(i<0){
                    i = j;
                    j = i+1;
                }
                
            }
            else{
                i+=1;
                while(i<s.length() && s[i]=='0'){
                    i+=1;
                }
                j= i+1;
            }
        }
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                ans+=s[i];
            }
        }
        return ans;
    }
};