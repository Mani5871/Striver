// Time Complexity : O(N)
// Space Complexity : O(N)
// https://leetcode.com/problems/n-queens/

class Solution {
public: 
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n, vector<int> &rows, vector<int> &lower, vector<int> &upper) {
        
        if(col == n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row ++)
        {
            if(rows[row] == 0 && lower[row + col] == 0 && upper[n - 1 + col - row] == 0)
            {
                rows[row] = 1;
                lower[row + col] = 1;
                upper[n - 1 + col - row] = 1;
                board[row][col] = 'Q';
                
                solve(col + 1, board, ans, n, rows, lower, upper);
                
                rows[row] = 0;
                lower[row + col] = 0;
                upper[n - 1 + col - row] = 0;
                board[row][col] = '.';
            }
        }
        
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans; 
        vector<string> board(n);
        
        string s(n, '.'); 
        for(int i = 0;i<n;i++) {
            board[i] = s; 
        }
        
        vector<int> rows(n, 0), lower(2 * n - 1, 0), upper(2 * n - 1, 0);
        
        solve(0,board, ans, n, rows, lower, upper); 
        return ans; 
    }
    
};
