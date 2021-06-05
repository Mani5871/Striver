class Solution {
public:
    
    void find_sum(vector<int> &nums, int i, int k, vector<int> &ans, vector<vector<int>> &res)
    {
        if(k == 0)
        {
            res.push_back(ans);
            return;
        }
        
        for(int j = i; j != nums.size(); j ++)
        {
            if(j != i && nums[j] == nums[j - 1])
                continue;
            
            if(k - nums[j] >= 0)
            {
                ans.push_back(nums[j]);
                find_sum(nums, j + 1, k - nums[j], ans, res);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int k) {
        
        vector<int> ans;
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        find_sum(nums, 0, k, ans, res);
        return res;
    }
};
