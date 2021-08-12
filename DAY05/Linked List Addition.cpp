// Time Complexity : O(N)
// Space Compelxity  O(N)
// https://leetcode.com/problems/add-two-numbers/

typedef ListNode node;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        node *head = new node();
        node *temp = head, *temp1;
        
        int sum = 0, num = 0, car = 0;
        
        while(l1 != NULL || l2 != NULL || car)
        {
            sum = 0;
            if(l1 != NULL)
            {
                sum += l1 -> val;
                l1 = l1 -> next;
            }
            
            if(l2 != NULL)
            {
                sum += l2 -> val;
                l2 = l2 -> next;
            }
            
            
            sum += car;
            
            num = sum % 10;
            car = sum / 10;
            
            temp1 = new node(num);
            temp -> next = temp1;
            temp = temp1;
            
        }
        return head -> next;
        
    }
};
