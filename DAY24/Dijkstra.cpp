// Time Complexity : O(V ^ 2)
// Space Complexity : O(V)
// https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1#

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector <int> dist(V + 1, INT_MAX);
        
        dist[S] = 0;
        pq.push({S, 0});
        
        while(!pq.empty())
        {
            int curr = pq.top().first;
            int dis = pq.top().second;

            pq.pop();
            
            for(auto it : adj[curr])
            {
                if(dist[curr] + it[1] < dist[it[0]])
                {
                    dist[it[0]] = dist[curr] + it[1];
                    pq.push({it[0], it[1]});
                }
                
            }
        }
        return dist;

    }
};

