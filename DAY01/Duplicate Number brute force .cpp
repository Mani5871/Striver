// Time Complexity : O(N)
// Space Complexity : O(N)
// https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map <int, bool> map1;
        int i;
        
        for(i = 0; i != nums.size(); i ++)
        {
            if(map1.find(nums[i]) != map1.end())
                break;
            map1[nums[i]] = true;
        }
        
        return nums[i];
    }
};
