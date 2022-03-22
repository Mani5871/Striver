// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack <int> st;
        for(int i = 0; i < n; i ++)
            st.push(i);
            
            
        while(st.size() >= 2)
        {
            int p1 = st.top();
            st.pop();
            
            int p2 = st.top();
            st.pop();
            
            if(M[p1][p2] == 0)
                st.push(p1);
                
            else if(M[p2][p1] == 0)
                st.push(p2);
        }
        
        int celb = st.top();
        
        for(int i = 0; i < n; i ++)
        {
            if(i == celb)
                continue;
                
                
            if(M[celb][i] == 1 or M[i][celb] == 0)
                return -1;
        }
        return celb;
    }
};

