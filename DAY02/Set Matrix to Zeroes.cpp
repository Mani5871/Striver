// Time Complexity : O(M * N)
// space Complexity : O(M + N)
// https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        
        int i, j, k, n = a.size();
       
        unordered_map<int, int> rows, cols;
        
        for(i = 0; i < n; i ++)
            rows[i] = cols[i] = 0;
        
        for(i = 0; i < a.size(); i ++)
        {
            for(j = 0; j < a[i].size(); j ++)
            {
                if(a[i][j] == 0)
                {
                    rows[i] = cols[j] = 1;
                }
            }
        }
        
        
        for(i = 0; i < n; i ++)
        {
            for(j = 0; j < a[i].size(); j ++)
            {
                if(rows[i] == 1 || cols[j] == 1)
                    a[i][j] = 0;
            }
        }
        
    }
};
