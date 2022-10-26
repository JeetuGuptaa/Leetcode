class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> track;
        track[0] = 0;
        
        int sum = 0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(track.count(sum%k)==0){
                track[sum%k] = i+1;
            }
            else if(track[sum%k]<i){
                return true;
            }
        }
        return false;
    }
};