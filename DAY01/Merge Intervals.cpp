// Time Complexity : O(N Log N)
// Space Complexity : O(1)
// https://leetcode.com/problems/merge-intervals/


class Solution {
public:
    
    int max(int a, int b)
    {
        if(a > b)
            return a;
        return b;
    }
    vector<vector<int>> merge(vector<vector<int>>& a) {
        
        vector<vector<int>>res;
        
        int i, j, k, n = a.size();
        
        sort(a.begin(), a.end());
        
        vector<int>ans;
        
        pair<int, int> pair1;
        
        pair1.first = a[0][0];
        pair1.second = a[0][1];
        
        for(i = 0; i < n; i ++)
        {
            if(a[i][0] >= pair1.first && a[i][0] <= pair1.second)
                pair1.second = max(a[i][1], pair1.second);
            
            else
            {
                res.push_back({pair1.first, pair1.second});
                pair1.first = a[i][0];
                pair1.second = a[i][1];
            }
        }
        res.push_back({pair1.first, pair1.second});
        return res;
        
    }
};
