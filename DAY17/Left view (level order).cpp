// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#

vector<int> leftView(Node *root)
{
   // Your code here
   vector <int> val;
   if(!root)
    return val;
   Node *curr = root;
   
   queue <Node*> q;
   int i, j, k, n;
   q.push(curr);
   
   while(q.empty() == false)
   {
       n = q.size();
       for(i = 0; i < n; i ++)
       {
            curr = q.front();
            q.pop();
           
            if(i == 0)
                val.push_back(curr -> data);
            
            if(curr -> left)
                q.push(curr -> left);
            if(curr -> right)
                q.push(curr -> right);
       }
   }
   
   return val;

}
