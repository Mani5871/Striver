// Time Complexity : O(N * Sum)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

class Solution{
public:
    map <pair<int, int>, bool> map1;
    bool part(int arr[], int N, int sum)
    {
        if(map1.find({N, sum}) != map1.end())
            return map1[{N, sum}];
        if(sum == 0)
            return map1[{N, sum}] = true;
        if(N == 0)
            return map1[{N, sum}] = false;
            
        if(arr[N - 1] <= sum)
        {
            return map1[{N, sum}] = part(arr, N - 1, sum - arr[N - 1]) || part(arr, N - 1, sum);
        }
        
        else
            return map1[{N, sum}] = part(arr, N - 1, sum - arr[N - 1]);
    }
    int equalPartition(int N, int arr[])
    {
        int i, j, sum = 0;
        for(i = 0; i < N; i ++)
            sum += arr[i];
        
        if(sum % 2)
            return 0;
        
        if(part(arr, N, sum / 2))
            return 1;
        
        return 0;
    }
};
