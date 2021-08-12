// Time Complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/linked-list-cycle-ii/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head || !head -> next)
            return NULL;
        
        ListNode *slow, *fast, *slow1;
        
        slow = fast = head;
        
        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            
            if(slow == fast)
            {
                fast = head;
                while(slow != fast)
                {
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return slow;
            }
        }
        return NULL;
        
        
    }
};
