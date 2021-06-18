// Time Complexity : O(V ^2)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1#

class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector <int> parent(V + 1, -1), mst(V + 1, 0), key(V + 1, INT_MAX);
        key[0] = 0;
        
        int cnt = 0;
        
        while(cnt < V + 1)
        {
            int min_key = INT_MAX, min;
            for(int i = 0; i < key.size(); i ++)
            {
                if(key[i] < min_key && mst[i] == 0)
                {
                    
                    min = i;
                    min_key = key[i];
        
                }
            }
            
            mst[min] = 1;
                
            for(auto it : adj[min])
            {
                parent[it[0]] = min;
                if(key[it[0]] > it[1] && mst[it[0]] == 0)
                    key[it[0]] = it[1];
            }
            cnt ++;
        }
        int sum = 0;
        for(int i = 0; i < V; i ++)
        {
            sum += key[i];
        }

        return sum;
    }
};
