// Time Complexity : O(N)
// Space Complexity : O(N)

class Solution {
public:

    int call_depth(TreeNode *root, int dis, int &depth) 
    {
        if(dis > depth) 
            depth = dis;
        if(!root) return depth;

        call_depth(root -> left, dis + 1, depth);
        call_depth(root -> right, dis + 1, depth);
        return depth;
    }
    int maxDepth(TreeNode* root) {

        int dis = 0, depth = 0;
        int a = call_depth(root, dis, depth);
        return depth;
    }
};
