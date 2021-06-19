// Time complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/stack-using-two-queues/1#

void QueueStack :: push(int x)
{
        // Your Code
    q1.push(x);
    for(int i = 0; i < q1.size() - 1; i ++)
    {
        q1.push(q1.front());
        q1.pop();
    }
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
