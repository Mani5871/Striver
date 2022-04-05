class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *ptr = head;
        for(; ptr != NULL; ptr = ptr->next)
        {
            Node *node = new Node(ptr -> val);
            node -> next = ptr -> next;
            ptr -> next = node;
            ptr = ptr -> next;
        }

        for(ptr = head; ptr != NULL; ptr = ptr-> next -> next)
        {
            Node *next_ptr = ptr -> next;
            next_ptr -> random = (ptr -> random) ? ptr -> random -> next : NULL;
        }

        Node *result = new Node(0);
        ptr = head;
        Node *temp = result;


        while(ptr != NULL)
        {
            Node *copy = ptr -> next;
            ptr -> next = (copy -> next) ? copy -> next : NULL;
            
            temp -> next = copy;
            temp = temp -> next;

            ptr = ptr -> next;
        }

        return result -> next; 

    }
};
// @lc code=end

