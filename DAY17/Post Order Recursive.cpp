// Time Complexity : O(N)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/postorder-traversal/1#


void util(Node* root, vector<int> &val)
{
    if (root == NULL)
        return;
    
    util(root -> left, val);
    util(root -> right, val);
    val.push_back(root -> data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int>val;
  util(root, val);
  return val;
}
