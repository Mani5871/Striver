class Solution {
public:
    
    void permute(vector<string> &strs, string str, int i)
    {
        if(i == str.size())
        {
            strs.push_back(str);
            return;
        }
        
        for(int j = i; j < str.size(); j ++)
        {
            swap(str[i], str[j]);
            sort(str.begin() + i +  1, str.end());
            permute(strs, str, i + 1);
            swap(str[i], str[j]);
        }
    }
    
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
