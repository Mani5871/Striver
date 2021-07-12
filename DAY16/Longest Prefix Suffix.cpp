// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/longest-prefix-suffix2527/1/?track=md-string&batchId=144

class Solution{
public:		

	int lps(string s)
	{
	    // Your code goes here
	    int i, j, k, cnt = 0;
	    string str1, str2;
	    int n = s.size();
	    vector <int> vec(n, 0);
	    
	    for(i = 1; i < n; i ++)
	    {
	        j = vec[i - 1];
	        
	        while(j > 0 && s[i] != s[j])
	            j = vec[j - 1];
	        
	        if(s[i] == s[j])
	            j ++;
	        vec[i] = j;
	    }
	    return vec[n - 1];
	}
};
