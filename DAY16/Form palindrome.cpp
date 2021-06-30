// Time Complexity : O(N)
// Space Complexity : O(N * 2)
// https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1#

class Solution{
    public:
    int dp[1001][1001];
    
    int check(string &str, int i, int j)
    {
        if(dp[i][j] != -1)
            return dp[i][j];
            
        if(i > j || i == j)
        {
            return dp[i][j] = 0;
        }
        
        if(str[i] == str[j])
            return dp[i][j] = check(str, i + 1, j - 1);
        
            
        else
        {
            int a = check(str, i, j - 1) + 1;
            int b = check(str, i + 1, j) + 1;
            return dp[i][j] = min(a, b);
        }
    }
    
    int countMin(string str){
        
        int i, j, k, n;
        n = str.size();
        i = 0;
        j = n - 1;
        
        for(int p = 0; p < 1001; p ++)
        {
            for(int q = 0; q < 1001; q++)
                dp[p][q] = -1;
        }
        
        return check(str, i, j);
        
    }
};
