// Time Complexity : O(N ^ 2)
// https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1#

class Solution{
    public:
    
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        // your code here
        int t[n + 1][m + 1];
        int i, j, k, cnt = 0;
        
        for(i = 0; i < n + 1; i ++)
        {
            for(j = 0; j < m + 1; j ++)
            {
                if(i == 0 || j == 0)
                    t[i][j] = 0;
                    
                else if(s1[i - 1] == s2[j - 1])
                {
                    t[i][j] = 1 + t[i - 1][j - 1];
                    cnt = max(cnt, t[i][j]);
                }
                
                else
                    t[i][j] = 0;
            }
        }
        return cnt;
    }
};
