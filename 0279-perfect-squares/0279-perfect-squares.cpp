class Solution {
public:
    
        int LeastPerfectSquare(vector<int> &square, int sum, int index, vector<vector<int>> &memo){
        if(index>=square.size() || sum<0) return 10000;
        if(sum == 0) return 0;
        
        if(memo[index][sum]!=-1) return memo[index][sum];
        int x = 1 + LeastPerfectSquare(square, sum-square[index], index, memo);
        int y = LeastPerfectSquare(square, sum, index+1, memo);
        
        memo[index][sum] = min(x, y);
        return memo[index][sum];
    }
    
    int numSquares(int n) {
        vector<int> square;
        for(int i=1;i*i<=n;i++){
            square.push_back(i*i);
        }
        
        
        if(square[square.size()-1]==n) return 1;
        vector<vector<int>> memo(square.size()+1, vector<int>(n+1, -1));
        return LeastPerfectSquare(square, n, 0, memo);
    }
};