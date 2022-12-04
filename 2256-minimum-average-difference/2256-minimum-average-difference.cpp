class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i = 0;i<n;i++){
            sum+=(long long)nums[i];
        }

        long long prefixSum = 0;
        int minAvg = INT_MAX, index = 0, currAvg = 0, count ;
        for(count = 1;count <= nums.size();count++){
            prefixSum += (long long)nums[count-1];
            sum -= (long long)nums[count-1];
            if(count==n){
                currAvg = abs(prefixSum/count);
            }
            else currAvg = abs(prefixSum/count - sum/(n-count));
            
            if(currAvg<minAvg){
                minAvg = currAvg;
                index = count-1;
            }
           
        }
        
         return index;
    }
};