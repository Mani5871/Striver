// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/preorder-traversal/1#

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {

        vector<int> nodes;

        if(!root) return nodes;

        stack <TreeNode*> st; 
        st.push(root);

        while(!st.empty())
        {
            root = st.top();
            nodes.push_back(root -> val);
            st.pop();

            if(root -> right)
                st.push(root -> right);

            if(root -> left)
                st.push(root -> left);
        }
        
        return nodes;
    }
};

