// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1#

class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	
	void util(int V, vector<int> adj[], vector<int> &visit, vector<int> &val, int node)
	{
	    val.push_back(node);
	    visit[node] = 1;
	        
	    for(auto u = adj[node].begin(); u != adj[node].end(); u ++)
	    {
	        if(visit[*u] == 0)
	        {
	             util(V, adj, visit, val, *u);
	        }
	    }
	}
	
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    vector <int> visit(V + 1, 0);
	    vector <int> val;
	    
	    util(V, adj, visit, val, 0);
	    return val;
	}
};
