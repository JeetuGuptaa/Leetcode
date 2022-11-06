class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(), s.end());
            return s;
        }
        string ans = s;
        for(int i=0;i<s.size()-1;i++){
            s = s.substr(1,s.size()-1) + s[0];
            if(ans>s){
                ans = s;
            }
        }
        return ans;
    }
};