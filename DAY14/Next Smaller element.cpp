// Time Complexity : O(N)
// Space Complexity : O(N)

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    typedef long long ll;
    vector <int> nextSmall(long long arr[], int n)
    {
        // Your code here
        ll i, j, k;
        vector <ll> left(n, -1), right(n, -1);
        stack <ll> s;
        
        for(i = 0; i < n; i ++)
        {
            if(s.empty())
                s.push(i);
                
            while(arr[i] < arr[s.top()])
            {
                j = s.top();
                
                if(arr[i] < arr[j])
                {
                    right[j] = arr[i];
                    s.pop();
                }
                
                if(s.empty())
                    break;
            }
            s.push(i);

        }
        return right;
        
    }
};
