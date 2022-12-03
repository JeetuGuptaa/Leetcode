class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> countFrequency;
        
        for(int i=0;i<nums.size();i++){
            countFrequency[nums[i]]++;
        }
        
        vector<pair<int, int>> kfreq;
        for(auto x:countFrequency){
            kfreq.push_back({x.second, x.first});
        }
        
        sort(kfreq.begin(), kfreq.end());
        vector<int> ans;
        for(int i = kfreq.size()-1;k>0;i--){
            k--;
            ans.push_back(kfreq[i].second);
        }
        
        return ans;
    }
};