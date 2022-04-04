class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int i, j, k;
        ListNode *ptr, *prev, *curr, *left, *right;

        ptr = prev = curr = left = right = head;
        
        if(!head -> next)
            return NULL;

        int cnt = 1;
        while(cnt ++ < n)
            ptr = ptr -> next;

        left = ptr;
        
        if(!left -> next)
        {
            head = head -> next;
            return head;
        }
        
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
// @lc code=end

