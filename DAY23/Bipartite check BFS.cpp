// Time COmplexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/bipartite-graph/1

class Solution {
public:

    bool check(vector <int> adj[], vector <int> &visit, int curr)
    {
        visit[curr] = 0;
        queue <int> q;
        q.push(curr);
        
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node])
            {
                
                if(visit[node] == visit[it])
                    return false;

                if(visit[it] == -1)
                {
                    if(visit[node] == 0)
                        visit[it] = 1;
                    else
                        visit[it] = 0;
                    q.push(it);
                }
            }
        }
        return true;
    }
    
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector <int> visit(V, -1);
	    
	    for(int i = 0; i < V; i ++)
	    {
	        if(visit[i] == -1)
	            if(!check(adj, visit, i))
	                return false;
	             
	    }
	    return true;
	}

};
