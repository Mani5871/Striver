// Time Complexity : O(N * M)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#

class Solution{

	public:
	map <pair<int, int>, int> map1;
	int mod = pow(10, 9) + 7;
	int perfectSum(int arr[], int n, int sum)
	{
	    if(map1.find({sum, n}) != map1.end())
	        return map1[{sum, n}];

        if(sum == 0)
            return map1[{sum, n}] = 1;
        if(n == 0)
            return map1[{sum, n}] = 0;
            
        if(arr[n - 1] <= sum)
        {
            int b = perfectSum(arr, n - 1, sum - arr[n - 1]);
            int c = perfectSum(arr, n - 1, sum);
            return map1[{sum, n}] = (b + c) % mod;
        }
        
        return map1[{sum, n}] = perfectSum(arr, n - 1, sum) % mod;
	}
	  
};
