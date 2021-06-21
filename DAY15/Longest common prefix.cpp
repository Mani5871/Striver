// Time Complexity : O(N * max(|arr[i|))
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1#

class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code hereri
        int min1 = INT_MAX, i, j, k;
        // cout << arr[0].size(); 
        // return arr[0];
        
        string s, s1, s2;
        
        for(i = 0; i < n; i ++)
        {
            if(arr[i].size() < min1)
            {
                min1 = arr[i].size();
                s1 = arr[i];
            }
        }
        
        j = s1.size();
        
        for(i = 0; i < n; i ++)
        {
            if(s1.size() == 0)
                return "-1";
            
            if(arr[i].substr(0, j) == s1)
                continue;
                
            while(arr[i].substr(0, j) != s1 && s1.size() != 0)
            {
                s1 = s1.substr(0, j - 1);
                j --;
            }
        }
        return s1;
    }
};
