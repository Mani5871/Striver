// Time Complexity : O(N)
// Space Complexity : O(N)
// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char>str1;
        
        int i, j, k, n = s.size();
        
        for(i = 0; i < n; i ++)
        {
            if(s[i] == '{')
                str1.push(s[i]);
            
            else if(s[i] == '(')
                str1.push(s[i]);
            
            else if(s[i] == '[')
                str1.push(s[i]);
            
            else if(s[i] == ')')
            {
                if(str1.empty())
                    return false;
                if(str1.top() != '(')
                    return false;
                str1.pop();
            }
            
            else if(s[i] == ']')
            {
                if(str1.empty())
                    return false;
                if(str1.top() != '[')
                    return false;
                str1.pop();
            }
            
            else if(s[i] == '}')
            {
                if(str1.empty())
                    return false;
                if(str1.top() != '{')
                    return false;
                str1.pop();
            }
                
        }
        if(str1.empty())
            return true;
        return false;
        
    }
};
