// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/preorder-traversal/1#

vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> val;
  stack<Node*> ord;
  Node * curr = root;
  
  while(ord.empty() == false || curr != NULL)
  {
    //   val.push_back(curr -> data);
      
      while(curr != NULL)
      {
          val.push_back(curr -> data);
          ord.push(curr);
          curr = curr -> left;
      }
      
      curr = ord.top();
      ord.pop();
      curr = curr -> right;
  }
  
  return val;
