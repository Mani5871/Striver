// Time COmplexity : O(N)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int c1 = 0, c2 = 0, ele1, ele2;
        
        ele1 = ele2 = -1;
        
        int i, n = nums.size();
        
        for(i = 0; i < n; i ++)
        {
            if(nums[i] == ele1)
                c1++;
            
            else if(nums[i] == ele2)
                c2++;
            
            else if(c1 == 0)
            {
                c1 = 1;
                ele1 = nums[i];
            }
            
            else if(c2 == 0)
            {
                c2 = 1;
                ele2 = nums[i];
            }
            
            else
            {
                c1--;
                c2--;
            }
        }
        
        vector<int>arr;
        
        c1 = 0;
        c2 = 0;
        
        for(i = 0; i < n; i ++)
        {
            if(nums[i] == ele1)
                c1 ++;
            else if(nums[i] == ele2)
                c2 ++;
        }
        cout << ele1 << " " << ele2; 
        if(c1 > n / 3)
            arr.push_back(ele1);
        
        if(c2 > n / 3)
            arr.push_back(ele2);
        
        return arr;
    }
};
