class Solution {
public:
    

    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int, int>> index;
        for(int i=0;i<growTime.size();i++){
            index.push_back({growTime[i], plantTime[i]});
        }
        sort(index.begin(), index.end());
        int rem = 0;
        int ans = 0;
        for(int i=growTime.size()-1;i>=0;i--){
            ans += index[i].second;
            rem = max(rem-index[i].second, index[i].first);
        }
        ans += rem;
        return ans ;
        
        
    }
};