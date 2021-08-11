// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

int maxLen(int a[], int n)
{
    int i, j, k, cnt = 0, max_cnt = 0;
    
    unordered_map<int, int>map1;
    
    int sum = 0;
    
    for(i = 0; i < n; i ++)
    {
        sum += a[i];
        if(sum == 0)
            cnt = i + 1;
            
        else if(map1.find(sum) != map1.end())
            cnt = max(cnt, i - map1[sum]);
            
        else
            map1[sum] = i;
    }
    return cnt;
}
