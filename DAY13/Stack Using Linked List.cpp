// Time Complexity : O(1)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1#

void MyStack ::push(int x) 
{
    // Your Code
    StackNode *ptr;
    ptr = new StackNode(x);
    ptr -> data = x;
    ptr -> next = top;
    top = ptr;
}

int MyStack ::pop() 
{
    // Your Code
    if(top != NULL)
    {
        int x = top -> data;
        top = top -> next;
        return x;
    }
    return -1;
}
