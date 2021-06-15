// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/postorder-traversal/1#

vector <int> postOrder(Node* root)
{
  // Your code here
  vector <int> val;
  
  stack <Node*> s1, s2;
  
  s1.push(root);
  Node *curr = root;
  
  while(s1.empty() == false)
  {
      curr = s1.top();
      s1.pop();
      s2.push(curr);
      
      if(curr -> left)
        s1.push(curr -> left);
      if(curr -> right)
        s1.push(curr -> right);
  }
  
  while(s2.empty() == false)
  {
      curr = s2.top();
      s2.pop();
      val.push_back(curr -> data);
  }
  return val;
  
}
