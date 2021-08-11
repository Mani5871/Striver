// Time Complexity : O(N)
// Space Complexity : O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int key) {
        
        unordered_map<int, int>map1;
        
        for(int i = 0; i < nums.size(); i ++)
        {
            if(map1.find(key - nums[i]) != map1.end())
                return {i, map1[key - nums[i]]};
            
            map1[nums[i]] = i;
        }
        
        return {-1};
    }
};
