#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int low = 0, high = matrix.size() - 1;

        while(low <= high)
        {
            swap(matrix[low], matrix[high]);
            low ++;
            high --;
        }

        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix.size(); j++)
            {
                if(i == j)
                    continue;
                
                if(i > j)
                    continue;
                
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
