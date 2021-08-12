// Time Complexity : O(N)
// Space Complexity : O(1)

int getMiddle(Node *head)
{
   // Your code here
   Node * temp = head;
   
   int cnt = 0;
   
   while(temp != NULL)
   {
       temp = temp -> next;
       cnt ++;
   }
   
   int cnt1 = cnt / 2 + 1, i = 1;
   
   temp = head;
   
   while(i < cnt1)
   {
       temp = temp -> next;
       i ++;
   }
   
   return temp -> data;
}
