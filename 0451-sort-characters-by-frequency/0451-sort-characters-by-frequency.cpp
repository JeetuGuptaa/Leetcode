class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> alpha;
        
        for(int i=0;i<s.size();i++){
            alpha[s[i]]++;
        }
        
        vector<pair<int, char>> alphabets;
        for(auto x:alpha){
            alphabets.push_back({x.second, x.first});
        }
        
        sort(alphabets.begin(), alphabets.end());
        
        string ans = "";
        for(int i = alphabets.size()-1;i>=0;i--){
            int j = 0;
            while(j<alphabets[i].first){
                ans+=alphabets[i].second;
                j++;
            }
        }
        
        return ans;
    }
};