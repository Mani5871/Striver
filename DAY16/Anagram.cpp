// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/anagram-1587115620/1

class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a.size() != b.size())
            return false;
            
        vector<int> a1(27, 0), b1(27, 0);
        int n = a.size();
        
        for(int i = 0; i < n; i ++)
        {
            a1[(int)(a[i]) - 97] ++;
            b1[(int)(b[i]) - 97] ++;
        }
        for(int i = 0; i < a1.size(); i ++)
            if(a1[i] != b1[i])
                return false;
        return true;
        
    }

};
