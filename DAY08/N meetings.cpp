// Time Complexity : O(NLogN)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    static bool greater(const pair <int, int> &a, const pair <int, int> &b)
    {
        return a.second < b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int, int>> meet;
        
        for(int i = 0; i < n; i ++)
            meet.push_back({start[i], end[i]});
        
        sort(meet.begin(), meet.end(), greater);
        
        int cnt = 1, end_time = meet[0].second, i, j, k;
        
        for(i = 1; i < meet.size(); i ++)
        {
            if(meet[i].first > end_time)
            {
                cnt ++;
                end_time = meet[i].second;
            }
        }
        return cnt;
    }
};
