// Time Complexity : O(N! * N)
// Space Complexity: O(1)
// https://leetcode.com/problems/permutations/

class Solution {
public:
    
    unordered_map<int, bool>map1;
    vector<int>ans;

    void swap_permute(vector<int> &nums, vector<vector<int>> &res, int i)
    {
        if(i == nums.size())
        {
            res.push_back(nums);
            return;
        }
        
        for(int j = i; j != nums.size(); j ++)
        {
            swap(nums[i], nums[j]);
            swap_permute(nums, res, i + 1);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        swap_permute(nums, res, 0);
        return res;
        
    }
};
