// Time Complexity : O( N! * N)
// Space Complexity : O(N)
// https://leetcode.com/problems/permutations/

class Solution {
public:
    
    unordered_map<int, bool>map1;
    vector<int>ans;
    
    void new_permute(vector<int> &nums, vector<vector<int>> &res, int j)
    {
        if(ans.size() == nums.size())
        {
            res.push_back(ans);
            return;
        }
        
        for(int i = 0; i != nums.size(); i ++)
        {
            if(map1.find(nums[i]) == map1.end() || map1[nums[i]] == false)
            {
                ans.push_back(nums[i]);
                map1[nums[i]] = true;
                new_permute(nums, res, i + 1);
                ans.pop_back();
                map1[nums[i]] = false;
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> res;
        new_permute(nums, res, 0);
        return res;
        
    }
};
