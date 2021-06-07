// Time Complexity : O(N * N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#

class Solution 
{
    public:
    
    static bool compare(const pair<int, int> &a, pair<int, int> &b)
    {
        return a.second > b.second;
    }
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<pair<int, int>> job;
        int i, j, k, max = INT_MIN;
        
        for(i = 0; i < n; i ++)
        {
            job.push_back({arr[i].dead, arr[i].profit});
            
            if(arr[i].dead > max)
                max = arr[i].dead;
        }
        
        sort(job.begin(), job.end(), compare);
        vector<int> hour(max + 1, 0);
        
        for(i = 0; i < n; i ++)
        {
            j = job[i].first;
            while(j >= 1)
            {
                if(hour[j] == 0)
                {
                    hour[j] = job[i].second;
                    break;
                }
                    
                j --;
            }
        }
        
        int cnt = 0, pro = 0;
        
        for(i = 0; i != hour.size(); i ++)
        {
            if(hour[i] != 0)
            {
                cnt ++;
                pro += hour[i];
            }
        }
        
        return {cnt, pro};    
        
    } 
};
