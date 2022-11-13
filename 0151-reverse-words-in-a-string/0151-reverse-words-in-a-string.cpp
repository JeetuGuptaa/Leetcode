class Solution {
public:
    string reverseWords(string s) {
        
        string ans = "";
        bool end = false;
        int wordEnd, wordStart;
        
        for(int i= s.size()-1;i>=0;i--){
            if(s[i]!=' ' && end == false){
                wordEnd = i;
                end = true;
            }
            else if(s[i]==' ' && end == true){
                wordStart = i+1;
                if(ans.size()!=0){
                    ans+=" ";
                }
                while(wordStart<=wordEnd){
                    ans+=s[wordStart];
                    wordStart++;
                }
                end = false;
            }
        }
        
        if(s[0]!=' '){
            wordStart = 0;
            if(ans.size()!=0){
                ans+=" ";
            }
            while(wordStart<=wordEnd){
                ans += s[wordStart];
                wordStart++;
            }
        }
        
        return ans;
    }
};