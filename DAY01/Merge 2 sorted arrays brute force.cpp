// Time Complexity : O(N Log N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1#

class Solution{
    public:
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
             long long i, j, k;
            
            vector<long long> final_arr;
            
            for(i = 0; i < n; i ++)
                final_arr.push_back(arr1[i]);
                
            for(i = 0; i < m; i ++)
                final_arr.push_back(arr2[i]);
                
            sort(final_arr.begin(), final_arr.end());
            
           
            for(i = 0, j = 0; i < n; i ++)
                arr1[i] = final_arr[j ++];

            for(i = 0; i < m; i ++)
                arr2[i] = final_arr[j ++];  
        }       
};
