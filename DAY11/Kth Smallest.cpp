#include <bits/stdc++.h>
using namespace std;

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
	if(row2.size() < row1.size())
		swap(row1, row2);
	
	int num1 = row1.size();
	int num2 = row2.size();
	
	int low = max(0, k - num2), high = min(k, num1);
	
	while(low <= high)
	{
		int cut1 = low + (high - low) / 2;
		int cut2 = k - cut1;
		
		int l1 = (cut1 == 0) ? INT_MIN : row1[cut1 - 1];
		int l2 = (cut2 == 0) ? INT_MIN : row2[cut2 - 1];
		
		int r1 = (cut1 == num1) ? INT_MAX : row1[cut1];
		int r2 = (cut2 == num2) ? INT_MAX : row2[cut2];
		
		if(l1 <= r2 and l2 <= r1)
			return max(l1, l2);
		
		else if(l1 > r2)
			high = cut1 - 1;
		
		else
			low = cut1 + 1;
	}
}
