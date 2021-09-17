// Time Complexity : O(N ^ 2)
// Space Complexity : O(1)
// https://leetcode.com/problems/diameter-of-binary-tree/

int find_height(TreeNode * root) 
{
    if(!root) return 0;

    int left = find_height(root->left);
    int right = find_height(root ->right);

    return 1 + max(left, right);
}

int find_total(TreeNode * root, int max_height)
{
    if(!root) return max_height;

    int left = find_height(root->left);
    int right = find_height(root->right);

    // max_height = max(max_height, left + right);

    int lheight = find_total(root -> left, max_height);
    int rheight = find_total(root -> right, max_height);

    return max({left + right, lheight, rheight});
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        return find_total(root, 0);

    }
};

