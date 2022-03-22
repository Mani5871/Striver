#include <bits/stdc++.h>
using namespace std;

vector<int> findSpans(vector<int> &prices) {
    // Write your code here.
    int i, j, k, n = prices.size();
    stack <pair<int, int>> st;
    vector <int> res(n, 0);
    
    for(i = 0; i < n; i ++)
    {
        int temp = 1;
        int price = prices[i];
        while(!st.empty() and price >= st.top().first)
        {
            temp += st.top().second;
            st.pop();
        }
        res[i] = temp;
        st.push({price, temp});
    }
    return res;
}
