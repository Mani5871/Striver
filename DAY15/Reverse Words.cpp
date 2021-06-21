// Time Complexity : O(N)
// Space COmplexity : O(N)
// https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        vector <string> res;
        string s1;
        
        int i, j, k, n = s.size();
        j = 0;
        
        
        for(i = 0; i < n; i ++)
        {
            if(s[i] == '.')
            {
                s1 = s.substr(j, i - j);
                
                s1 = '.' + s1;
                
                j = i + 1;
                res.push_back(s1);
            }
            
            if(i == n - 1)
            {
                s1 = s.substr(j, i - j + 1);
                res.push_back(s1);
            }
        }
        
        s1 = "";
        for(i = res.size() - 1; i >= 0; i --)
            s1 += res[i];
    
        return s1;
    } 
};
