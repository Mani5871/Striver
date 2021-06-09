// Time Complexity : O(1)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/implement-queue-using-array/1#

void MyQueue :: push(int x)
{
        // Your Code
        arr[rear ++] = x;
        
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code    
        if(front == rear)
            return -1;
        return arr[front ++];
}
