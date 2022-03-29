void find_max(BinaryTreeNode < int > * root, int &max_num)
{
    if(!root)
        return;
    find_max(root -> left, max_num);
    max_num = max(max_num, root -> data);
    find_max(root -> right, max_num);
}

void change_leaf(BinaryTreeNode < int > * root, int max_num)
{
    if(!root)
        return;
    if(!root -> left and !root -> right)
        root -> data = max_num;
    change_leaf(root -> left, max_num);
    change_leaf(root -> right, max_num);
}

int sumTree(BinaryTreeNode < int > * root)
{
    if(!root)
        return 0;
    int left = sumTree(root -> left);
    int right = sumTree(root -> right);
    
    if(root -> left or root -> right)
        root -> data = left + right;
    return root -> data;
}


void changeTree(BinaryTreeNode < int > * root) {
    // Write your code here.
    int max_num = -1;
    find_max(root, max_num);
    change_leaf(root, max_num);
    sumTree(root);
}  
