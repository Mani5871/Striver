class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string s1 = "", s2 = "";
        
        int i, j, k, n = s.size();
        j = 0;
        
        
        for(i = 0; i < n; i ++)
        {
            if(s[i] == '.')
            {
                s2 = s.substr(j, i - j);
                
                s2 = '.' + s2;
                
                s1 = s2 + s1;
                
                j = i + 1;
            }
            
            if(i == n - 1)
            {
                s2 = s.substr(j, i - j + 1);
                s1 = s2 + s1;
            }
        }
        
        return s1;
    } 
};
