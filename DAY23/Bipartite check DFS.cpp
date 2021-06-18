// Time Complexity : O(V + E)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/bipartite-graph/1

class Solution {
public:

    bool check(vector <int> adj[], vector <int> &visit, int curr)
    {
       
        for(auto it : adj[curr])
        {
            if(visit[it] == visit[curr])
                return false;
        
            if(visit[it] == -1)
            {
                if(visit[curr] == 0)
                    visit[it] = 1;
                else
                    visit[it] = 0;
                    
                if(!check(adj, visit, it))
                    return false;
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
	        {
	            visit[i] = 0;
	            if(!check(adj, visit, i))
	                return false;
	        }
	             
	    }
	    return true;
	}

};
