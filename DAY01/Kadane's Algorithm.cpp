// Time Complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0, sum1 = 0, least = nums[0];
        
        for(int i = 0; i != nums.size(); i ++)
        {
            sum1 += nums[i];
            if(sum1 > 0 && sum1 > sum)
            {
                sum = sum1;
            }
            if(sum1 < 0)
            {
                sum1 = 0;
            }
            if(nums[i] > least)
                least = nums[i];
        }
        if(sum > 0)
            return sum;
        return least;
            
        
    }
};
