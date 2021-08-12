// Time Complexity : O(N + M)
// Space Complexity : O(1)

Node* sortedMerge(Node* l1, Node* l2)  
{  
    // code here
    if(!l1)
        return l2;
    
    if(!l2)
        return l1;
        
    if(l2 -> data < l1 -> data)
        swap(l1, l2);
        
    Node *head = l1;
    
    while(l1 != NULL && l2 != NULL)
    {
        Node * temp = NULL;
        while(l1 != NULL && l1 -> data <= l2 -> data)
        {
            temp = l1;
            l1 = l1-> next;
        }
        
        temp -> next = l2;
        swap(l1, l2);
    }
    return head;
}  
