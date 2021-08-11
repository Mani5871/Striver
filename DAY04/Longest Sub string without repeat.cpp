// Time Complexity : O(N)
// Space Complexity : O(N)
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int>map1(256, -1);
        
        int left = 0, right = 0, n = s.size(), len = 0;
        
        while(right < n)
        {
            if(map1[s[right]] != -1)
                left = max(left, map1[s[right]] + 1);
            
            map1[s[right]] = right;
            
            len = max(len, right - left + 1);
            
            right ++;
        }
        return len;
    }
};
