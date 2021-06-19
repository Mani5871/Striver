// Time Complexity : O(N)
// Space COmplexity : O(N)
// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#

void QueueStack :: push(int x)
{
        // Your Code
    q2.push(x);
    while(!q1.empty())
    {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}


int QueueStack :: pop()
{
        // Your Code  
    if(q1.empty())
        return -1;
    int i = q1.front();
    q1.pop();
    return i;
}
