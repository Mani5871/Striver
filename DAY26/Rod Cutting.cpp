// Time Complexity : O(N ^ 3)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

class Solution{
  public:
  map <pair<int, int>, int> map1;
  int help(int arr[], int n, int tot)
  {
      if(map1.find({tot, n}) != map1.end())
        return map1[{tot, n}];
      
      if(n == 0  || tot == 0)
        return map1[{tot, n}] = 0;
      if(n <= tot)
      {
          int a = arr[n - 1] + help(arr, n, tot - n);
          int b = arr[n - 1] + help(arr, n - 1, tot - n);
          int c = help(arr, n - 1, tot);
          
          return map1[{tot, n}] = max({a, b, c});
      }
      
      return map1[{tot, n}] = help(arr, n - 1, tot);
  }
    int cutRod(int price[], int n) {
        return help(price, n, n);
    }
};
