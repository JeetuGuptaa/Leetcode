class Solution {
public:
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> track;
        vector<vector<string>> vec;
        
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            track[temp].push_back(strs[i]);
        }
        
        for(auto x:track){
            vec.push_back(x.second);
        }
        
        return vec;
    }
};