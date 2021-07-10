// Time Complexity : O(SUM * N)
// Space Complexity : O(SUM * N)
// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/#

class Solution{   
public:
    
    bool isSubsetSum(int N, int arr[], int sum){
        
        bool dp[sum + 1][N + 1];
        dp[0][0] = true;
        
        for(int i = 1; i < sum + 1; i ++)
            dp[i][0] = false;
        
        for(int i = 1; i < N + 1; i ++)
            dp[0][i] = true;
                
        int i, j, k;
        
        for(i = 1; i < sum + 1; i ++)
        {
            for(j = 1; j < N + 1; j ++)
            {
                if(arr[j - 1] <= i)
               {
                    bool a = dp[i -arr[j - 1]][j - 1];
                    bool b = dp[i][j - 1];
                    dp[i][j] = a || b;
                }
                else
                    dp[i][j] = dp[i][j - 1];
            }
        }
        return dp[sum][N];
    }
        
};
