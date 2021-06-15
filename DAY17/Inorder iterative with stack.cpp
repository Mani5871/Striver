// Time Complexity : O(N)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/inorder-traversal/1#

class Solution {
  public:
    
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>val;
        Node *curr = root;
        
        stack<Node*> ord;
        
        
        while(ord.empty() == false || curr != NULL)
        {
            while(curr != NULL)
            {
                
                ord.push(curr);
                curr = curr -> left;
            }
            
            curr = ord.top();
            ord.pop();
            val.push_back(curr -> data);

            curr = curr -> right;
           
        }
        
        return val;
        
    }
};
