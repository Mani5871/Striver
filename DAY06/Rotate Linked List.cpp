/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
typedef ListNode node;
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || !head -> next || k == 0)
            return head;
        
        node *ptr, *temp, *ptr1;
        
        int i, j, cnt = 1;
        
        for(temp = head; temp -> next != NULL; temp = temp -> next)
            cnt ++;
        //cout << cnt << endl;
        
        k = k % cnt;
        
        temp -> next = head;
        temp = head;
        i = cnt - k - 1;
        
        while(i --)
            temp = temp -> next;
        cout << temp -> val;
        
        head = temp -> next;
        temp -> next = NULL;
        
        return head;
    }
};
