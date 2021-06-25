// Time Complexity : O(N)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1

class Solution{
public:
    vector<vector<int> > stockBuySell(vector<int> a, int n){
        // code here
        vector<vector<int>> result;
        int i, bi = 0, si, buy = a[0], sell = -1;
        
        for(i = 1; i < n; i ++)
        {
            if(a[i] >= sell && a[i] > buy)
            {
                sell = a[i];
                si = i;
            }
            

            if(a[i] < sell || a[i] <= buy)
            {
                
                if(sell != -1)
                {
                    result.push_back({bi, si});
                    buy = a[i];
                    bi = i;
                    sell = -1;
                    
                }
                if(a[i] <= buy)
                {
                    
                    buy = a[i];
                    bi = i;
                    sell = -1;
                }
                
            }
        }
        if(buy < sell)
            result.push_back({bi, si});
        
        return result;
        
    }
};
