// Time Complexity : O(N ^ 2)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1#

class Solution{

  public:
  map <pair<int, int>, int> map1;
  int help(int arr[], int n, int sum, int sum1)
  {
      if(map1.find({sum1, n}) != map1.end())
        return map1[{sum1, n}];
        
      if(n == 0)
        return map1[{sum1, n}] = abs((sum - sum1) - sum1);

      int a = help(arr, n - 1, sum, sum1 + arr[n - 1]);
      int b = help(arr, n - 1, sum, sum1);
      
      return map1[{sum1, n}] = min(a, b);
      
  }
    int minDifference(int arr[], int n)
    {
        int i, sum = 0;
        for(i = 0; i < n; i ++)
            sum += arr[i];
            
        return help(arr, n, sum, 0);
    }
	   
};
