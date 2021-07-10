// Time Complexity : O(N * W)
// Space Complexity : O(N * W)
// https://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1#

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        int dp[N + 1][W + 1];
        
        int i, j, k;
        
        for(i = 0; i < N + 1; i ++)
            dp[i][0] = 0;
            
        for(i = 0; i < W + 1; i ++)
            dp[0][i] = 0;
            
        for(i = 1; i < N + 1; i ++)
        {
            for(j = 1; j < W + 1; j ++)
            {
                if(wt[i - 1] <= j)
                {
                    int a = val[i - 1] + dp[i][j - wt[i - 1]];
                    int b = val[i - 1] + dp[i - 1][j - wt[i - 1]];
                    int c = dp[i - 1][j];
                    
                    dp[i][j] = max({a, b, c});
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[N][W];
    }
};
