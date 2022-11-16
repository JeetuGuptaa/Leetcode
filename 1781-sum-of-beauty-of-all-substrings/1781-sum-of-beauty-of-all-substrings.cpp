class Solution {
public:
    
    int beautycalc(vector<int> &alpha){
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        for(int i=0;i<26;i++){
            maximum = max(maximum, alpha[i]);
            if(alpha[i]>=1){
                minimum = min(minimum, alpha[i]);
            }
        }
        
        return maximum - minimum;
    }
    
    
    int beautySum(string s) {
        int beauty = 0;
        for(int i=0;i<s.size();i++){
            vector<int> alpha(26, 0);
            int maximum = INT_MIN;
            int minimum = INT_MAX;
            for(int j=i;j<s.size();j++){
                alpha[s[j] - 'a']++;
                int curBeauty = beautycalc(alpha);
                beauty +=curBeauty;
            }
        }
        return beauty;
    }
};