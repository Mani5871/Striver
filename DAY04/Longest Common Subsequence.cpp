// Time COmplexity : O(N)
// Space Complexity : O(N)
// https://leetcode.com/problems/longest-consecutive-sequence/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_map<int, bool>map1;
        
        for(int i = 0; i < nums.size(); i ++)
            map1[nums[i]] = true;
        
        int cnt = 0, max_cnt = 0;
        
        for(int i = 0; i < nums.size(); i ++)
        {
            if(map1.find(nums[i] - 1) != map1.end())
                continue;
            
            int j = nums[i] + 1;
            cnt = 1;
            
            while(1)
            {
                if(map1.find(j) != map1.end())
                    cnt ++;
                else
                    break;
                j ++;
                max_cnt = max(cnt, max_cnt);
            }
           max_cnt = max(cnt, max_cnt);
        }
        return max_cnt;
        
    }
};
