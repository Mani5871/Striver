class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int i, j, k;
        ListNode *ptr, *prev, *curr, *left, *right;

        ptr = prev = curr = left = right = head;
        
        if(!head -> next)
            return NULL;
        
        for(int i = 1; i < n; i ++)
            ptr = ptr -> next;
        
        if(!ptr -> next)
            return head -> next;
        
        while(ptr -> next)
        {
            prev = right;
            right = right -> next;
            ptr = ptr -> next;
        }
        
        prev -> next = right -> next;
        return head;
    }
};
