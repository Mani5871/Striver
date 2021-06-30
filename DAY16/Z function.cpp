// Time Complexity : O(N * K)
// Space Compleixty : O(N)
// https://practice.geeksforgeeks.org/problems/8dcd25918295847b4ced54055eae35a8501181c1/1/#

class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code hee.
            string str = pat + '$' + txt;
            int z[str.size() + 1];
            
            int i, j, k, l, p, q, r;
            int n = str.size() + 1;
            
            i = pat.size() + 1;
            z[0] = 0;
            
            for(i = 1; i < str.size(); i ++)
            {
                if(str[i] != str[0])
                {
                    z[i] = 0;
                    continue;
                }
                
                j = 0;
                int cnt = 1;
                l = i;
                while(str[l] == str[j])
                {
                    z[l] = 0;
                    z[i] = cnt;
                    l ++;
                    cnt ++;
                    j ++;
                }
            }
            
            vector <int> res;
            for(i = 0; i < n; i ++)
            {
                if(z[i] == pat.size())
                    res.push_back(i - pat.size());
            }
            if(res.size() == 0)
                res.push_back(-1);
            
            return res;
        }
     
};
