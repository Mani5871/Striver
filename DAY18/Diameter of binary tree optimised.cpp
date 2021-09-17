// Time Complexity : O(N)
// Space Complexity : O(1)
// https://leetcode.com/problems/diameter-of-binary-tree/

int find_height(TreeNode * root, int &dia) 
{
    if(!root) return 0;

    int left = find_height(root->left, dia);
    int right = find_height(root ->right, dia);
    dia = max(dia, left + right);
    return 1 + max(left, right);
}

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        
        int dia = 0;
        find_height(root, dia);
        return dia;
    }
};
