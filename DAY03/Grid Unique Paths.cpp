// Time Complexiy : O(N ^ 2)
// Space Complexity : O(N)
// https://leetcode.com/problems/unique-paths/

class Solution {
public:
    
    int cnt;
    map<vector<int>, int>map1;
    
    int path(int m, int n, int i, int j)
    {
        
        if(i == m - 1 && j == n - 1)
        {
            cnt ++;
            cout << cnt << endl;
            return 1;
        }
        
        vector<int> data = {i, j};
        if(map1.find(data) != map1.end())
            return map1[{i, j}];
        
        if(i >= m || j >= n)
            return 0;
        
        map1[{i, j}] = path(m, n, i + 1, j) + path(m, n, i, j + 1);
        
        return map1[{i, j}];
    }
    
    int uniquePaths(int m, int n) {
        
        return path(m, n, 0, 0);
        
    }
};
