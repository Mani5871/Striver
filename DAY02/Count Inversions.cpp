class Solution{
  public:

    typedef long long int lli;
    
    long long int merge(lli arr[], lli temp[], lli left, lli mid, lli right)
    {
        lli i = left, j = mid, k = left;
        lli inv_count = 0;
        
        while(i <= mid - 1 and j <= right)
        {
            if(arr[i] <= arr[j])
                temp[k ++] = arr[i ++];
                
            else
            {
                inv_count += (mid - i);
                temp[k ++] = arr[j ++];
            }
        }
        
        while(i <= mid - 1)
            temp[k ++] = arr[i ++];
            
        while(j <= right)
            temp[k ++] = arr[j ++];
            
            
        for (i = left; i <= right; i++)
            arr[i] = temp[i];
            
        return inv_count;
    }
    
    long long int mergesort(lli arr[], lli temp[], lli left, lli right)
    {
        lli inv_count = 0;
        
        if(left < right)
        {
            lli mid = (left + right) / 2;
            inv_count += mergesort(arr, temp, left, mid);
            inv_count += mergesort(arr, temp, mid + 1, right);
            inv_count += merge(arr, temp, left, mid + 1, right);
        }
        
        return inv_count;
    }
    
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        lli temp[N];
        return mergesort(arr, temp, 0, N - 1);
        
    }

};
