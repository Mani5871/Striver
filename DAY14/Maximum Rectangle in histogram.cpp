// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#

class Solution
{
    public:
    typedef long long ll;
    long long getMaxArea(long long arr[], int n)
    {
        ll i, j, k;
        vector <ll> left(n, -1), right(n, n);
        stack <ll> s;
        
        for(i = 0; i < n; i ++)
        {
            if(s.empty())
                s.push(i);
                
            while(arr[i] < arr[s.top()] && s.top() != n)
            {
                j = s.top();
                
                if(arr[i] < arr[j])
                {
                    right[j] = i;
                    s.pop();
                }
                
                if(s.empty())
                    break;
            }
            s.push(i);

        }
        
        while(!s.empty())
            s.pop();
            
        for(i = n - 1; i >= 0; i --)
        {
            if(s.empty())
                s.push(i);
                
            while(arr[i] < arr[s.top()] && s.top() != -1)
            {
                j = s.top();
                if(arr[i] < arr[j])
                {
                    left[j] = i;
                    s.pop();
                }
                
                if(s.empty())
                    break;
            }
            s.push(i);
        }
        
        ll max = INT_MIN;
        
        for(i = 0; i < n; i ++)
        {
            j = (right[i] - left[i] - 1) * arr[i];
            if(j > max)
                max = j;
        }
        
        return max;
    }
};
