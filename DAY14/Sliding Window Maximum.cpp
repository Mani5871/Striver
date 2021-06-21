// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1#

class Solution
{
    public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        int i, j, max1 = INT_MIN;
        if(k == n)
        {
            for(i = 0; i < n; i ++)
                if(arr[i] > max1)
                    max1 = arr[i];
                    
            return {max1};
        }
        
        list <int> li;
        vector <int> res;
        
        i = 0;
        j = 0;
        
        for(i = 0; i < n; i ++)
        {
            if(j >= n)
                break;
                
            while(j - i + 1 <= k)
            {
                if(li.size() == 0)
                {
                    li.push_back(arr[j]);
                    j ++;
                    continue;
                }
                
                int flag = 0;
                while(arr[j] > li.front())
                {
                    flag = 1;
                    li.pop_front();
                    
                    if(li.size() == 0)
                        break;
                }
                
                if(flag)
                {
                    li.push_back(arr[j ++]);
                    continue;
                }
                
                while(arr[j] > li.back())
                {
                    li.pop_back();
                    
                    if(li.size() == 0)
                        break;
                }
                    
                li.push_back(arr[j ++]);
            }
            
            res.push_back(li.front());
            
            if(li.front() == arr[i])
                li.pop_front();
        }
        
        return res;
        
    }
};
