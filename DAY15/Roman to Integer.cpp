// Time Complexity : O(N)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1#


int number(char s)
{
    switch(s)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}
int romanToDecimal(string &str) {
    // code here
    
    int i, j, k, num = 0, n = str.size();
    
    for(i = 0; i < n - 1; i ++)
    {
        j = number(str[i]);
        
        if(number(str[i + 1]) > j)
            num -= j;
            
        else
            num += j;
            
    }
    num += number(str[i]);
    return num;

    
}
