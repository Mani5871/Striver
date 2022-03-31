typedef long long int lli;

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    lli i, j, k, n = A.size();
    lli s = n * (n + 1) / 2;
    lli p = n *(n + 1) * (2 * n + 1) / 6;

    for(i = 0; i < n; i ++)
    {
        s -= (lli)A[i];
        p -= (lli)A[i] * A[i]; 
    } 

    int x = (s + p / s) / 2;
    int y = x - s;
    return {y, x};
}
