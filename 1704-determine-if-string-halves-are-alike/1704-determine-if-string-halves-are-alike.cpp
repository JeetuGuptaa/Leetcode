class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowels = 0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                if(2*i<s.size()) vowels+=1;
                else vowels-=1;
            }
        }
        
        return (vowels==0);
    }
};