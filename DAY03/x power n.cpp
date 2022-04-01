class Solution {
public:
    double myPow(double x, int n) {
        double res = 1.0;
        long n1 = n;
        n1 = (n < 0) ? -1 * n1 : n1; 

        while(n1 > 0)
        {
            if(n1 % 2 == 0)
            {
                x = x * x;
                n1 /= 2;
            }
            else
            {
                res *= x;
                n1 -= 1;
            }
        }

        if(n < 0)
            return 1.0 / res;
        return res;
    }
};
