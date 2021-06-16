// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1#

class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    queue <int> q;
	    q.push(0);
	    
	    vector <bool> visit(V + 1, false);
	    vector <int> val;
	    
	    while(! q.empty())
	    {
	        int node = q.front();
	        q.pop();
	        val.push_back(node);
	        visit[node] = true;
	        
	        for(auto u = adj[node].begin(); u != adj[node].end(); u ++)
	        {
	            if (! visit[*u])
	            {
	                visit[*u] = true;
	                q.push(*u);
	            }
	        }
	    }
	    return val;
	}
};
