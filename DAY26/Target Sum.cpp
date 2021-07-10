// Time Complexity : O(N ^ 2)
// Space Complexity : O(N)
// https://leetcode.com/problems/target-sum/

class Solution {
public:
    map<pair<int, int>, int>map1;
    int check(vector <int> &nums, int sum, int n)
    {
        if(map1.find({sum, n}) != map1.end())
            return map1[{sum, n}];
        if(n == 0)
        {
            if(sum == 0)
                return map1[{sum, n}] = 1;
            return map1[{sum, n}] = 0;
        }
        return map1[{sum, n}] = check(nums, sum + nums[n - 1], n - 1) + check(nums, sum - nums[n - 1], n - 1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return check(nums, target, nums.size());
    }
};
