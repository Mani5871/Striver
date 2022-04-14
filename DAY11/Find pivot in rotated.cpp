/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0, high = nums.size() - 1;
        
        if(nums[low] < nums[high])
            return nums[low];

        while(low < high)
        {
            int mid = low + (high - low) / 2;
            
            if(nums[mid] > nums[high])
                low = mid + 1;
            
            else 
                high = mid;
        }
        return nums[low]; 
    }
};
// @lc code=end

