// Time Complexity : O(N ^ 2)
// https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1#

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    map <pair <int, int>, int> map1;
    int help(int x, int y, string s1, string s2, int cnt)
    {
        if(map1.find({x, y}) != map1.end())
            return map1[{x, y}];
            
        if(x == 0 || y == 0)
            return map1[{x, y}] = 0;
            
        if(s1[x - 1] == s2[y - 1])
            return map1[{x, y}] = 1 + help(x - 1, y - 1, s1, s2, cnt + 1);
            
        else
        {
            int a = help(x - 1, y, s1, s2, cnt);
            int b = help(x, y - 1, s1, s2, cnt);
            return map1[{x, y}] = max(a, b);
        }
    }
    
    int lcs(int x, int y, string s1, string s2)
    {
        // your code hereif
        // return help(x, y, s1, s2, 0);
        int mat[x + 1][y + 1];
        
        int i, j, k, n;
        for(i = 0; i < x + 1; i ++)
            mat[i][0] = 0;
            
        for(i = 0; i < y + 1; i ++)
            mat[0][i] = 0;
            
        for(i = 1; i < x + 1; i ++)
        {
            for(j = 1; j < y + 1; j ++)
            {
                if(s1[i - 1] == s2[j - 1])
                    mat[i][j] = 1 + mat[i - 1][j - 1];
                    
                else
                    mat[i][j] = max(mat[i][j - 1], mat[i - 1][j]);
            }
        }
        return mat[x][y];
    }
};
