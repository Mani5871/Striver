class Solution {
public:
    
    void find_sum(vector<int> &nums, int i, int k, vector<vector<int>> &res, vector<int> &ans)
    {
        if(k == 0)
        {
            res.push_back(ans);
            return;
        }
        
        for(int j = i; j != nums.size(); j ++)
        {
            if(k - nums[j] >= 0)
            {
                ans.push_back(nums[j]);
                find_sum(nums, j, k - nums[j], res, ans);
                ans.pop_back();
            }
            
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int k) {
        
        vector<int> ans;
        vector<vector<int>> res;
        
        find_sum(nums, 0, k, res, ans);
        
        return res;
        
    }
};
