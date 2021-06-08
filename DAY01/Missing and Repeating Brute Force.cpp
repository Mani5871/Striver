// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        vector<int> hash(n + 1, 0);
        
        for(int i = 0; i < n; i ++)
            hash[*(arr + i)] ++;
            
        int a, b;

        for(int i = 1; i <= n; i ++)
        {
            if(hash[i] == 0)
                a = i;
            
            if(hash[i] == 2)
                b = i;
        }
        
        int c [] = {b, a};
        int *d = c;
        return d;
    }
};
