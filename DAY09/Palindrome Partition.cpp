class Solution {
public:
    
    bool ispal(string s, int start, int end)
    {
        while(start <= end)
        {
            if(s[start ++] != s[end --])
                return false;
        }
        return true;
    }
    
    void find_pal(vector<vector<string>> &res, string s, int i, vector<string> &ans)
    {
        if(i == s.size())
        {
            res.push_back(ans);
            return;
        }
        
        for(int j = i; j != s.size(); j ++)
        {
            if(ispal(s, i, j))
            {
                ans.push_back(s.substr(i, j - i + 1));
                find_pal(res, s, j + 1, ans);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        
        vector<string> ans;
        vector<vector<string>> res;
        find_pal(res, s, 0, ans);
        return res;
    }
};
