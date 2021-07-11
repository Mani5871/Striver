// Time Complexity : O(M * N)
// Space Complexity : O(M)
// https://practice.geeksforgeeks.org/problems/coin-change2448/1

class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long int table[n + 1];
        memset(table, 0, sizeof(table));
        
        table[0] = 1;
        
        for(long long int i=0; i<m; i++) 
        for(long long int j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 
  
    return table[n]; 
    }
};
