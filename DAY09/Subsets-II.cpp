/ #include<bits/stdc++.h>
// using namespace std;
class Solution {
public:
    
    void uniqueSubsets(int ind , vector<int> &nums,vector<int> &ds , vector<vector<int>> &ans){
 
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        if(i!=ind && nums[i]==nums[i-1]) continue;
        
        ds.push_back(nums[i]);
        uniqueSubsets(i+1,nums,ds,ans);
        
        //remove after entering it to ans vector of vector
        ds.pop_back();
    }
    
}


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());

        uniqueSubsets(0,nums,ds,ans);

        return ans;
    }
};
