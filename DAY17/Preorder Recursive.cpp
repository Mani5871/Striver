// Time Complexity : O(N)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/preorder-traversal/1#

void util(Node *root, vector<int> & val)
{
    if (!root)
        return;
    val.push_back(root -> data);
    util(root -> left, val);
    util(root -> right, val);
}
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> val;
  util(root, val);
  return val;
  
}
