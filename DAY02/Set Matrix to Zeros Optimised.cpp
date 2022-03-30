/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col = false;
        int i, j, k, m = matrix.size(), n = matrix[0].size();

        for(i = 0; i < m; i++)
        {
            if(matrix[i][0] == 0) col = true;
            for(j = 1; j < n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(i = m - 1; i >= 0; i --)
        {
            for(j = n - 1; j >= 1; j --)
            {
                if(matrix[i][0] == 0 or matrix[0][j] == 0)
                    matrix[i][j] = 0;
            }
            if(col == true)
                matrix[i][0] = 0;
        }
    }
};

