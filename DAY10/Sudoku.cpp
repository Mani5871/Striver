// https://leetcode.com/problems/sudoku-solver/

class Solution {
public:
    void solveSudoku(vector<vector<char>>& board)
    {    
     solve(board);
    }
    
    bool solve(vector<vector<char>> &board)
    {
        int i, j;
        
        for(i = 0; i != board.size(); i ++)
        {
            for(j = 0; j != board[0].size(); j ++)
            {
                if(board[i][j] == '.')
                {
                    for(char k = '1'; k <= '9'; k ++)
                    {
                        if(check(board, i, j, k))
                        {
                            board[i][j] = k;
                         
                            if(solve(board))
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool check(vector<vector<char>> &board, int row, int col, char k)
    {
        
        for(int i = 0; i < 9; i ++)
        {
            if(board[row][i] == k)
                return false;
            
            if(board[i][col] == k)
                return false;
            
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == k)
                return false;
        }
        return true;
    }
};
