class Solution
{
    public:
    int check(Node *root)
    {
        if(!root)
            return 0;
            
        int left = check(root -> left);
        int right = check(root -> right);
        
        if(left == -1 or right == -1)
            return -1;

        if((!root -> left and !root -> right) or root -> data == left + right)
            return left + right + root -> data;
            
        return -1;
        
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(check(root) == -1)
            return false;
            
        return true;
    }
};
