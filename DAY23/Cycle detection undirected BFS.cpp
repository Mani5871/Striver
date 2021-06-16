// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution 
{
    public:
    //Function to detect cycle in an undirected graph.
    
    bool check(vector<int>adj[], vector<bool> &visit, int curr)
    {
        queue<pair<int, int>>q;
        q.push({curr, -1});
        
        while(!q.empty())
        {
            curr = q.front().first;
            int par = q.front().second;
            visit[curr] = true;
            q.pop();
            
            for(auto u = adj[curr].begin(); u != adj[curr].end(); u ++)
            {
                if(visit[*u] && *u != par)
                    return true;
                
                if(visit[*u] == false)
                    q.push({*u, curr});
            }
        }
        return false;
    }
    
	bool isCycle(int V, vector<int>adj[])
	{
	    // Code here
	    
	    vector <bool> visit(V + 1, false);
	    
        for(int i = 0; i < V; i ++)
        {
            if(!visit[i])
            {
                if(check(adj, visit, i))
                    return true;
            }
        }
        return false;
	}
};
