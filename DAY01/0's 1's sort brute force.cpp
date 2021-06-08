// Time Complexity : O(N)
// Space Complexity : O(N)
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        vector<int> hash(3, 0);
        
        for(int i = 0; i != nums.size(); i ++)
            hash[nums[i]] ++;
        
        int i, j, k;
        
        i = 0;
        j = 0;
        
        while(1)
        {
            while(hash[i] != 0)
            {
                nums[j ++] = i;
                hash[i] --;
            }
            i ++;
            if(j == nums.size())
                break;
        }
    }
};
