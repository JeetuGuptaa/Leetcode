class Solution {
public:
    int maximum69Number (int num) {
        int duplicate = num;
        int firstOccurance = -1;
        int curDigit = 0;
        
        while(duplicate>0){
            if(duplicate%10==6){
                firstOccurance = curDigit;
            }
            curDigit++;
            duplicate = duplicate/10;
        }
        
        if(firstOccurance!=-1){
            return num + 3*pow(10, firstOccurance);
        }
        
        return num;
    }
};