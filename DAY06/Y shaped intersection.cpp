// Time Complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/intersection-of-two-linked-lists/

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    Node *l1, *l2;
    int cnt1 = 1, cnt2 = 1;
        
    for(l1 = head1; l1 != NULL; l1 = l1 -> next)
    {
        cnt1 ++;
    }
    
    for(l2 = head2; l2 != NULL; l2 = l2 -> next)
    {
        cnt2 ++;
    }
    
    int dif = abs(cnt1 - cnt2);
    
    if(cnt1 > cnt2)
    {
        l1 = head1;
        l2 = head2;
    }
    else
    {
        l1 = head2;
        l2 = head1;
    }
    
    for(int i = 1; i <= dif; i ++, l1 = l1 -> next);

    while(l1 != NULL && l2 != NULL)
    {
        if(l1 == l2)
            return l1 -> data;
        
        l1 = l1 -> next;
        l2 = l2 -> next;
    }
    
    return -1;
    
}
