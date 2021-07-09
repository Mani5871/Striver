// Time Complexity : O(2 ^ N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    map<pair<int, int>, int> map1;
    
    int knapSack(int W, int wt[], int val[], int n) 
    {
        if(map1.find({W, n}) != map1.end())
            return map1[{W, n}];
            
        if(n == 0 || W == 0)
            return map1[{W, n}] = 0;
        
        if(wt[n - 1] <= W)
            return map1[{W, n}] = max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
    
        return map1[{W, n}] = knapSack(W, wt, val, n - 1);
    }
};
