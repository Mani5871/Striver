// Time Complexity : O(1)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/implement-stack-using-array/1#

void MyStack :: push(int x)
{
    // Your Code
    arr[++ top] = x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code  
    if(top != -1)
        return arr[top --];
}
