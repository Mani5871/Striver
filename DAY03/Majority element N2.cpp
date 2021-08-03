// Time complexity : O(N)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0, ele = nums[0], i, j, k, n = nums.size();
        
        for(i = 0; i < n; i ++)
        {
            if(cnt == 0)
                ele = nums[i];
            
            if(nums[i] == ele)
                cnt ++;
            
            else
                cnt --;
        }
        return ele;
    }
};
