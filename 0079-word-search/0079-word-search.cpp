class Solution {
public:
    
    bool check(vector<vector<char>>& board, string &word, int i, int j, int n){
        if(n == word.size()) return true;
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[n]) return false;
        
        board[i][j] = '0';
        
        bool result = check(board, word, i, j+1, n+1) || check(board, word, i+1, j, n+1) || check(board, word, i-1, j, n+1) || check(board, word, i, j-1, n+1);
        
        board[i][j] = word[n];
        
        return result;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(check(board, word, i, j, 0)) return true;
                }
            }
        }
        return false;
    }
};