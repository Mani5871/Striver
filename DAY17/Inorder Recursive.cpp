// Time Complexity : O(N)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/inorder-traversal/1#

class Solution {
  public:
    // Function to return a list containing the inorder otraversal of the tree.
    void util(Node *root, vector<int> &val)
    {
        if (root == NULL)
            return;
        util(root -> left, val);
        val.push_back(root -> data);
        util(root -> right, val);
    }
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>val;
        
        util(root, val);
        
        return val;
        
    }
