// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/topological-sort/1#

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector <int> in_degree(V + 1, 0);
	    queue <int> q;
	    vector <int> topo;
	    
	    for(int i = 0; i < V; i ++)
	    {
	        for(auto u : adj[i])
	        {
	            in_degree[u] ++;
	        }
	    }
	    
	    for(int i = 0; i < V; i ++)
	    {
	        if(in_degree[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    
	    while(!q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        
	        for(auto u : adj[node])
	        {
	            in_degree[u] --;
	            if(in_degree[u] == 0)
	                q.push(u);
	        }
	    }
	    return topo;
	}
};
