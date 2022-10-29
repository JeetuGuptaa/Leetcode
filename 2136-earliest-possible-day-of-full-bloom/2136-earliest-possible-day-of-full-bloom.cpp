class Solution {
public:
    

    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int, int>> index;
        for(int i=0;i<growTime.size();i++){
            index.push_back(pair<int, int>({growTime[i], i}));
        }
        sort(index.begin(), index.end());
        int rem = 0;
        long long ans = 0;
        for(int i=growTime.size()-1;i>=0;i--){
            ans += plantTime[index[i].second];
            rem = max(rem-plantTime[index[i].second], index[i].first);
        }
        ans += (long long)rem;
        return ans ;
        
        
    }
};