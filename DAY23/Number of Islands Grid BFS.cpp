// Time Complexity : O(M * N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1#

class Solution
{
    public:
    //Function to find the number of islands.
    
    bool check(vector<vector<char>>& grid, int visit[501][501], int i, int j)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
            return false;
        
        if(visit[i][j] == 1 || grid[i][j] == '0')
            return false;
            
        return true;
    }
    
    void path(vector<vector<char>>& grid, int visit[501][501], int i, int j)
    {
        
        queue <pair <int, int> > q;    
        q.push({i, j});
        visit[i][j] = 1;
        
        while(!q.empty())
        {
            i = q.front().first;
            j = q.front().second;
            
            q.pop();
            
            int arr[] = {0, 1, -1};

            int p, r;
            
            for(p = 0; p < 3; p ++)
            {
                for(r = 0; r < 3; r ++)
                {
                    if(arr[p] == 0 && arr[r] == 0)
                        continue;
                        
                    if(check(grid, visit, i + arr[p], j + arr[r]))
                    {
                        q.push({i + arr[p], j + arr[r]});
                        // cout << i + arr[p] << " " << j + arr[r] << endl;
                        visit[i + arr[p]][j + arr[r]] = 1;
                    }
                }
            }
            
        }
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        // Code here
        int visit[501][501];
        memset(visit, 0, sizeof(visit));
        
        
        int cnt = 0;
        for(int i = 0; i < grid.size(); i ++)
        {
            for(int j = 0; j < grid[0].size(); j ++)
            {
                if(visit[i][j] == 1 || grid[i][j] == '0')
                    continue;
                
                path(grid, visit, i, j);
                cnt ++;
            }
        }
        return cnt;
    }
};
