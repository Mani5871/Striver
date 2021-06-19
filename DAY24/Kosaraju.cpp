// Time Complexity : O(V + E)
//Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/strongly-connected-components-kosarajus-algo/1#

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	
	void rev(vector<int>adj1[], vector <int> &vis, int node)
	{
	    vis[node] = 1;
	    
	    for(auto it : adj1[node])
	    {
	        if(!vis[it])
	            rev(adj1, vis, it);
	    }
	}
	
	void dfs(vector <int> adj[], vector <int> &vis, stack <int> &s, int node)
	{
	    vis[node] = 1;
	    for(auto it : adj[node])
	    {
	        if(vis[it] == 0)
	            dfs(adj, vis, s, it);
	    }
	    s.push(node);
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        vector <int> vis(V, 0);
        int i, j, k;
        stack <int> s;
        for(i = 0; i < V; i ++)
            if(!vis[i])
                dfs(adj, vis, s, i);
                
        vector <int> adj1[V + 1];
        
        
        for(i = 0; i < V; i ++)
        {
            vis[i] = 0;
            for(auto it : adj[i])
            {
                adj1[it].push_back(i);
            }
        }

        
        int cnt = 0;
        while(!s.empty())
        {
            
            int node = s.top();
            s.pop();
            
            if(!vis[node])
            {
                rev(adj1, vis, node);
                cnt ++;
            }
            
        }
        return cnt;
        
    }
};
