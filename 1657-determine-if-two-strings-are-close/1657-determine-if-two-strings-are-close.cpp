class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> FirstArray(26, 0);
        vector<int> SecondArray(26, 0);
        
        for(int i =0 ;i<word1.size();i++){
            FirstArray[word1[i]-'a']++;
        }
        
        for(int i =0 ;i<word2.size();i++){
            SecondArray[word2[i]-'a']++;
        }
        
        
        for(int i =0;i<26;i++){
            if(FirstArray[i]==0 && SecondArray[i]!=0) return false;
            else if(FirstArray[i]!=0 && SecondArray[i]==0) return false;
            else continue;
            
        }
        
        
        sort(FirstArray.begin(), FirstArray.end());
        sort(SecondArray.begin(), SecondArray.end());
        
        if(FirstArray==SecondArray) return true;
        return false;
             
    }
};