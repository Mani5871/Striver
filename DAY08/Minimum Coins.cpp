// Test Case wrong
// https://practice.geeksforgeeks.org/problems/number-of-coins1824/1


class Solution{

	public:
	
	void solve(int n, int ind, vector<int> &cnt, int count, int coins[], int m)
	{
	    if(n == 0)
	    {
	        cnt.push_back(count);
	        return;
	    }
	    
	    for(int i = 0; i < m; i ++)
	    {
	        if(coins[i] <= n)
	            solve(n - coins[i], i, cnt, count + 1, coins, m);
	    }
	}
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    
	    int i, min = INT_MAX, cnt = 0, amt = V, j;
	    sort(coins, coins + M);
	    
	    for(i = M - 1; i >= 0; i --)
	    {
	        if(coins[i] > V)
	            continue;
	           
	        j = i;
	        amt = V;
	        cnt = 0;
	        
	        while(j >= 0)
	        {
	            cout << coins[j] << " " << amt << endl;
	            if(amt >= coins[j])
	            {
	                cnt ++;
	                amt -= coins[j];
	            }
	            else
	                j --;
	        }
	        
	        if(cnt < min && amt == 0)
	            min = cnt;
	    }
	    
	   if(min == INT_MAX)
	    min = -1;
	    return min;
	} 
	  
};
