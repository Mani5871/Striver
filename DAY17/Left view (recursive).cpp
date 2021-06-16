// Time Complexity : O(N)
// Space Complexity : O(N)
// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

void util(Node *root, vector <int> &val, vector <bool> &visit, int curr)
{
    if (! root)
        return;
    
    if(visit[curr] == false)
    {
        val.push_back(root -> data);
        visit[curr] = true;
    }
    
    util(root -> left, val, visit, curr + 1);
    util(root -> right, val, visit, curr + 1);
}

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector <int> val;
   vector <bool> visit(2000, false);
   
   util(root, val, visit, 0);
   
   return val;
   

}
