class Solution {
public:
    
    string getPermutation(int n, int k) {
        
        vector<int>nums;
        string ans = "";
        int fact = 1;
        for(int i = 1; i < n; i ++)
        {
            fact *= i;
            nums.push_back(i);
        }
        k --;
        nums.push_back(n);
        
        while(1)
        {
            ans += to_string(nums[k / fact]);
            nums.erase(nums.begin() + k / fact);
            if(nums.size() == 0)
                break;
            k %= fact;
            fact /= nums.size();
        }
        return ans;
    }
};
