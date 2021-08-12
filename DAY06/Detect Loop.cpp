// Time Complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/linked-list-cycle/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        // your code here
    ListNode *slow, *fast;
    slow = fast = head;
    
    while(slow && fast && fast -> next)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        
        if(slow == fast)
            return true;
    }
    return false;
    }
};
