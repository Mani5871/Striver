class Solution{
public:

   int next_gap(int n)
   {
       if(n <= 1)
        return -1;
       return (n / 2) + (n % 2);
   }
    
	void merge(int a1[], int a2[], int n, int m) {
	    // code here
	    
	    int i, j, k, t;
	    
	    int gap = next_gap(n + m);
	    
	    while(gap != -1)
	    {
	        for(i = 0; i + gap < n; i ++)
	        {
	            if(a1[i] > a1[i + gap])
	            {
	                int p = a1[i];
	                a1[i] = a1[i + gap];
	                a1[i + gap] = p;
	            }
	        }
	        
	        for(j = gap > n ? gap - n : 0; i < n && j < m; i ++, j ++)
	        {
	            if(a1[i] > a2[j])
	            {
	                int p = a1[i];
	                a1[i] = a2[j];
	                a2[j] = p;
	            }
	        }
	        
	        if(j < m)
	        {
	        
    	        for(j = 0; j + gap < m; j ++)
    	        {
    	            if(a2[j] > a2[j + gap])
    	            {
    	                int p = a2[j];
    	                a2[j] = a2[j + gap];
    	                a2[j + gap] = p;
    	            }
    	        }
	        }
	        gap = next_gap(gap);
	    }
	}
};
