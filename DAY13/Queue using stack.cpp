// Time Complexity : O(1) for push and O(N) for pop
// Space Complexity : O(N) for both
// https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1#

void StackQueue :: push(int x)
{
    s1.push(x);
}

int StackQueue :: pop()
{
    if(s1.empty() && s2.empty())
        return -1;
        
    if(!s2.empty())
    {
        int i = s2.top();
        s2.pop();
        return i;
    }
    
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    int i = s2.top();
    s2.pop();

    return i;
}
