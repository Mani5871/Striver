// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector <int> in_degree(V, 0);
	   	queue <int> q;
	   	for(int i = 0; i < V; i ++)
	   	{
	   	    for(auto u : adj[i])
	   	    {
	   	        in_degree[u] ++;
	   	    }
	   	}
	   	
	   	for(int i = 0; i < V; i ++)
	   	    if(in_degree[i] == 0)
	   	        q.push(i);
	   	
	   	int cnt = 0;
	   	while(!q.empty())
	   	{
	   	    int node = q.front();
	   	    cnt ++;
	   	    q.pop();
	   	    
	   	    for(auto u : adj[node])
	   	        if(--in_degree[u] == 0)
	   	            q.push(u);
	   	}
	   	
	   	if(cnt == V)
	   	    return false;
	   	return true;
	   	
	}
};
