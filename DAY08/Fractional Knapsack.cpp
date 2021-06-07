class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    static bool compare(const pair<int, int> &a, const pair<int, int> &b)
    {
        return (a.first / a.second) > (b.first / b.second);
    }
    
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        // Your code here
        vector<pair<int, int>> item;
        int i, j, k;
        
        for(i = 0; i < n; i ++)
            item.push_back({arr[i].value, arr[i].weight});
            
        sort(item.begin(), item.end(), compare);
        
        double pro = 0.0;
        
        i = 0;
        j = 0;
        
        while(1)
        {
            if(j + item[i].second <= w)
            {
                pro = pro + item[i].first;
                j += item[i].second;
                i ++;
            }
            
            else
            {
                int r = w - j;
                pro += item[i].first * (double(r) * (double) item[i].second);
                break;
            }
        }
     
        return pro;
    }
        
};

