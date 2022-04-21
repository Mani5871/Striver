#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int i, j, k, m = matrix.size(), n = matrix[0].size(), dir = 0;
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        vector <int> spiral;

        while(top <= bottom and left <= right)
        {
            if(1)
            {
                for(i = left; i <= right; i ++)
                    spiral.push_back(matrix[top][i]);

                top ++;
                dir ++;
            }

            if(1)
            {
                for(i = top; i <= bottom; i ++)
                    spiral.push_back(matrix[i][right]);

                right --;
                dir ++;
            }

            if(top <= bottom)
            {
                for(i = right; i >= left; i --)
                    spiral.push_back(matrix[bottom][i]);

                bottom --;
                dir ++;
            }

            if(left <= right)
            {
                for(i = bottom; i >= top; i --)
                    spiral.push_back(matrix[i][left]);

                left ++;
                dir = 0;
            }
        }
        return spiral;
    }
};
