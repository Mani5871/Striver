// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

class Solution
{
    public:
    typedef long long ll;
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        stack <ll> s;
        vector <ll> ans(n, -1);
        
        for(ll i = 0; i < arr.size(); i ++)
        {
            if(s.empty())
                s.push(i);
                
            while(arr[i] > arr[s.top()])
            {
                ll j = s.top();
                if(arr[i] > arr[j])
                {
                    ans[j] = arr[i];
                    s.pop();
                }
                
                if(s.empty())
                    break;
            }
            
            s.push(i);
        }
        
        return ans;
    }
};
