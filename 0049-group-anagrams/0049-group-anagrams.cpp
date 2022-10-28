class Solution {
public:
    
    vector<vector<string>> fun(vector<string> s){
        int ans = 0;
        vector<vector<string>> v;
        unordered_map<string,int> p;
        for(int i=0;i<s.size();i++){
            string ss = s[i];
            sort(s[i].begin(), s[i].end());
            if(p.count(s[i])>0){
                v[p[s[i]]].push_back(ss);
            }
            else{
                vector<string> vec;
                vec.push_back(ss);
                v.push_back(vec);
                p[s[i]] = ans;
                ans++;
            }
        }
        return v;
    }
    
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        return fun(strs);
    }
};