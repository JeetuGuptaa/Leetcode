class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int Inc1= INT_MAX, Inc2=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=Inc1){
                Inc1 = nums[i];
            }
            else if(nums[i]<=Inc2){
                Inc2 = nums[i];
            }
            else{
                return true;
            }
        }
        return false;
    }
};