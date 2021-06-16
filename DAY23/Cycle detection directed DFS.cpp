// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1#

class Solution
{
    public:
    
    bool check(vector<int>adj[], vector<bool> &dfs, vector <bool> &visit, int curr)
    {
        visit[curr] = true;
        dfs[curr] = true;
        
        for(auto i : adj[curr])
        {
            if(!visit[i])
            {
                if(check(adj, dfs, visit, i))
                    return true;
            }
            else if(dfs[i])
                return true;
        }
        dfs[curr] = false;
        return false;
    }
    
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	   	// code here
	   	vector <bool> visit(V + 1, false);
	   	vector <bool> dfs(V + 1, false);
	   	
	   	for(int i = 0; i < V; i ++)
	   	{
	   	    if (visit[i])
	   	        continue;
	   	    if(check(adj, dfs, visit, i))
	   	        return true;
	   	}
	   	return false;
	}
};
