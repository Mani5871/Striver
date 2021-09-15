// Time Complexity : O(N)
// Space Complexity : O(1)

class Solution {
public:

    int find_height(TreeNode *root)
    {
        if(! root) return 0;

        int left = find_height(root -> left);
        int right = find_height(root -> right);

        if(abs(left - right) > 1) return -1;
        if(left == -1 || right == -1) return -1;

        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {

        if(! root) return true;
        
        if(find_height(root) != -1) return true;

        return false;
        
    }
};
