// Time complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int cnt = 0;
        ListNode *prev, *curr = head;
        
        while(curr != NULL)
        {
            cnt ++;
            curr = curr -> next;
        }
        
        if(n == cnt)
        {
            head = head -> next;
            return head;
        }
        
       if(n == 1)
       {
           curr = head;
           for(; curr -> next != NULL; curr = curr -> next)
               prev = curr;
           prev -> next = curr -> next;
           return head;
       }
        
        int del = cnt - n + 1;
        int i = 1;
        curr = head;
        while(i < del)
        {
            prev = curr;
            curr = curr -> next;
            i ++;
        }
        
        prev -> next = curr -> next;
        return head;
        
    }
};
