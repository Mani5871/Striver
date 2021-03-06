// Time Complexity : O(1)
// space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1#

int _stack :: getMin()
{
    if(s.empty())
        return -1;
        
    return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
    if(s.empty())
       return -1;
    
    if(s.top() < minEle)
    {
        int j = minEle;
        minEle = 2 * minEle - s.top();
        s.pop();
        return j;
    }
    
    else
    {
        int j = s.top();
        s.pop();
        return j;
    }
}

/*
val < min
val - min < 0
val + val - min < 0
2 * val - min < 0


2 * min - (s.top())
2 * min - (2 * val - prev_min)
2 * min - (2 * min - prev_min) (since val == min)

*/



/*push element x into the stack*/
void _stack::push(int x)
{
    if(s.empty())
    {
        s.push(x);
        minEle = x;
        return;
    }
    
    if(x >= minEle)
        s.push(x);
        
    else
    {
        s.push(2 * x - minEle);
        minEle = x;
    }
}
