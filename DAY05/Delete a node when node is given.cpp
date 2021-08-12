// Time Complexity : O(1)
// Space Complexity : O(1)
// https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp = node -> next;
        node -> val = temp -> val;
        node -> next = temp -> next;
        delete(temp);
        
    }
};
